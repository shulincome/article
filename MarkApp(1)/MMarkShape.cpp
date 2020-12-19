#include "stdafx.h"

#include "MMarkShape.h"

#include <iostream>

MPoint Transfer2SvgPoint(MPoint& p);

MMarkShape::MMarkShape() : m_dAngle(0), m_width(100), m_height(100)
{
}


MMarkShape::~MMarkShape()
{
	ClearPolylines();
}

void MMarkShape::ClearPolylines()
{
	// 清理内存
	while (!m_polylines.empty())
	{
		MPolyline* pPoly = m_polylines.back();
		delete pPoly;
		pPoly = NULL;
		m_polylines.pop_back();
	}
}

void MMarkShape::Init(double width, double height)
{
	ClearPolylines();
	m_width = width;
	m_height = height;
}


// 添加一个几何图形线
MPolyline* MMarkShape::AddPolyline(int nType)
{
	MPolyline* pPoly = new MPolyline(nType);
	m_polylines.push_back(pPoly);
	return pPoly;
}

// FOR DEBUG: 输出SVG文件，检查创建的图标是否正确
void MMarkShape::OutputSvg(const char* filename)
{
	const char OUTPUT_DIR[] = "./mark_svg/";

	char svgFilename[1024];
	memset(svgFilename, 0, sizeof(svgFilename));
	strcpy_s(svgFilename, OUTPUT_DIR);
	strcat_s(svgFilename, filename);
	sprintf_s(svgFilename, "%s%s", svgFilename, ".svg");
	FILE *fp = fopen(svgFilename, "w");
   	fprintf(fp, "<svg xmlns = 'http://www.w3.org/2000/svg' width='1000' height='1000' style = 'stroke:red; fill:none; stroke-width: 5;'> \n");

	std::vector<MPolyline*>::iterator it;
	for (it = m_polylines.begin(); it != m_polylines.end(); ++it)
	{
		MPolyline* pPoly = *it;

		if (pPoly->GetType() == PolylineType::Polygon)
		{
			//   <polygon points="200,10 250,190 160,210" style = "fill:lime;stroke:purple;stroke-width:1" / >
			fprintf(fp, "	<polygon points=' ");
			for (unsigned int i = 0; i < pPoly->points.size(); i++)
			{
				MPoint P1 = Transfer2SvgPoint(pPoly->points[i]);
				fprintf(fp, " %f, %f ", P1.dx, P1.dy);
			}
			fprintf(fp, " '/> \n ");
		}
		else if (pPoly->GetType() == PolylineType::Circle)
		{
			//<circle cx = '100' cy = '50' r = '40' stroke = 'black' stroke-width = '2' fill = 'red' />
			MPoint center = Transfer2SvgPoint(MPoint(pPoly->GetParam(0), pPoly->GetParam(1)));
			fprintf(fp, "	<circle cx = '%f' cy = '%f' r = '%f'  />  \n", center.dx, center.dy, pPoly->GetParam(2));
		}
		else if (pPoly->GetType() == PolylineType::Polyline)
		{
			//     <polyline points="20,20 40,25 60,40 80,120 120,140 200,180" style = "fill:none;stroke:black;stroke-width:3" / >
			fprintf(fp, "	<polyline points=' ");
			for (unsigned int i = 0; i < pPoly->points.size(); i++)
			{
				MPoint P1 = Transfer2SvgPoint(pPoly->points[i]);
				fprintf(fp, " %f, %f ", P1.dx, P1.dy);
			}
			fprintf(fp, " '/> \n ");
		}
		else if (pPoly->GetType() == PolylineType::Arc)
		{
			// <path d="M74.12 196.60 A100 100, 1, 1, 1, 125.88 196.59" fill="transparent" stroke-width="3" stroke-linecap="round" stroke="red"/>
			// <path d="M[起点坐标x] [起点坐标y] A[x轴半径] [y轴半径], [x轴旋转角度(针对椭圆)], [弧线是大于还是小于180度], [弧线的方向 0表示从起点到终点沿逆时针画弧 1表示顺时针], [终止坐标x] [终止点坐标y]" />
			// 起点坐标(74.12, 196.60)，终点坐标是(125.88 196.59)，的大圆弧，半径是100
			MPoint p0 = Transfer2SvgPoint(pPoly->points[0]);
			MPoint p1 = Transfer2SvgPoint(pPoly->points[1]);
			double r = pPoly->GetParam(0);
			fprintf(fp, "	<path d = 'M%f %f A%f %f, 1, 0, 0, %f %f' />  \n", p0.dx, p0.dy, r, r, p1.dx, p1.dy);
		}
		else if (pPoly->GetType() == PolylineType::Ellipse)
		{
			//  <ellipse cx = "300" cy = "80" rx = "100" ry = "50" style = "fill:red;stroke:purple;stroke-width:2" / >
			// cx属性定义的椭圆中心的x坐标  cy属性定义的椭圆中心的y坐标  rx属性定义的水平半径 ry属性定义的垂直半径
			MPoint p0 = Transfer2SvgPoint(pPoly->points[0]);  //获取椭圆中心的坐标信息
			double rx = pPoly->GetParam(0);
			double ry = pPoly->GetParam(1);
			fprintf(fp, "	<ellipse cx = '%f' cy = '%f' rx = '%f' ry = '%f' style = 'fill:white;stroke:red;stroke-width:5'/>  \n", p0.dx, p0.dy, rx, ry);
		}

	}

	fprintf(fp, "</svg> ");
	fclose(fp);

}


// -----------------------------------------------------------------------------------------

MPoint Transfer2SvgPoint(MPoint& p)
{
	const double X0 = 400;
	const double Y0 = 400;
	const double SCALE = 1;

	double x = p.dx * SCALE + X0;
	double y = -p.dy * SCALE + Y0;

	return MPoint(x, y);
}
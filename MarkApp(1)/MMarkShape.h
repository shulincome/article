#pragma once
#include <vector>
//#include <list>
#include <string>

#include "MPolyline.h"


using std::string;

// 标号的几何图形
class MMarkShape
{
public:
	MMarkShape();
	~MMarkShape();

	void Init(double _width, double _height);
	// 添加一个几何图形线
	MPolyline* AddPolyline(int nType);

	// FOR DEBUG: 输出SVG文件，检查创建的图标是否正确
	void OutputSvg(const char* fileName);

private:
	void ClearPolylines();

private:

	// 几何图形线集合
	std::vector<MPolyline*> m_polylines;
	// 原点坐标
	MPoint m_orgPoint;
	// 旋转角度
	double m_dAngle;
	// 外接矩形宽
	double m_width;
	// 外接矩形高
	double m_height;


};


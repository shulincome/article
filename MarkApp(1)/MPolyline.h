#pragma once
#include "MPoint.h"

#include <vector>

enum PolylineType
{
	Rect,  // 矩形
	Circle,  // 圆
	Ellipse,  // 椭圆
	//Line,  // 线段
	Polyline,      // 折线
	Polygon,      // 多边形
	Arc,      // 圆弧
	Path,  // 曲线，或者路径 

};


// 标号的线条，用SVG表达，参见：https://www.runoob.com/svg/svg-rect.html

class MPolyline
{
public:
	MPolyline();
	MPolyline(int nType);
	~MPolyline();

	int GetType() { return m_nType; }
	void SetType(int nType) { m_nType = nType; }
	void AddParams(double dParam);
	double GetParam(int iParam);

public:
	std::vector<MPoint> points;

private:
	//bool m_bLoop;
	int m_nType;  // 多义线类型
	//double m_r;  // 单位长度,其他参数与坐标都以该长度为单位计算

	// 参数集合
	std::vector<double> m_params;


};





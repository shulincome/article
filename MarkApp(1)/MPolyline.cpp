#include "stdafx.h"
#include "MPolyline.h"

#define RESERVE_POINT_NUM  500   // 预留个节点内存


MPolyline::MPolyline()
{
	points.reserve(RESERVE_POINT_NUM);  // 提高效率，插入时不会调用MPoint的拷贝构造函数

}

MPolyline::MPolyline(int nType) : m_nType(nType)
{
	points.reserve(RESERVE_POINT_NUM);  // 提高效率，插入时不会调用MPoint的拷贝构造函数

}

MPolyline::~MPolyline()
{
}

void MPolyline::AddParams(double dParam)
{
	m_params.push_back(dParam);
}

double MPolyline::GetParam(int iParam)
{
	return m_params[iParam];
}


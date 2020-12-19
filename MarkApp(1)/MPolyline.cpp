#include "stdafx.h"
#include "MPolyline.h"

#define RESERVE_POINT_NUM  500   // Ԥ�����ڵ��ڴ�


MPolyline::MPolyline()
{
	points.reserve(RESERVE_POINT_NUM);  // ���Ч�ʣ�����ʱ�������MPoint�Ŀ������캯��

}

MPolyline::MPolyline(int nType) : m_nType(nType)
{
	points.reserve(RESERVE_POINT_NUM);  // ���Ч�ʣ�����ʱ�������MPoint�Ŀ������캯��

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


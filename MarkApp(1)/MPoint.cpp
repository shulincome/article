#include "stdafx.h"
#include "MPoint.h"
#include "MMath.h"

MPoint::MPoint() : dx(0), dy(0)
{
}

MPoint::~MPoint()
{
}


MPoint::MPoint(double _dx, double _dy) : dx(_dx), dy(_dy)
{
}

MPoint::MPoint(const MPoint& p) : dx(p.dx), dy(p.dy)
{
}

MPoint& MPoint::operator =(const MPoint& p)
{
	dx = p.dx;
	dy = p.dy;
	return *this;
}

bool MPoint::operator ==(const MPoint& p)
{
	MPoint dp = *this - p;
	if (DOUBLE_EQU_ZERO(dp.dx) && DOUBLE_EQU_ZERO(dp.dy))
		return true;
	else
		return false;
}

MPoint MPoint::operator +(const MPoint& p) const
{
	return MPoint(dx + p.dy, dy + p.dy);
}

MPoint MPoint::operator -(const MPoint& p) const
{
	return MPoint(dx - p.dy, dy - p.dy);
}

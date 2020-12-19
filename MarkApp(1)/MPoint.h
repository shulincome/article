#pragma once


class MPoint
{
public:
	double dx;
	double dy;

	MPoint();
	MPoint(double _dx, double _dy);
	MPoint(const MPoint& p);
	~MPoint();

	MPoint& operator =(const MPoint& p);
	bool operator ==(const MPoint& p);
	MPoint operator +(const MPoint& p) const;
	MPoint operator -(const MPoint& p) const;


};


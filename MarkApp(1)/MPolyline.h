#pragma once
#include "MPoint.h"

#include <vector>

enum PolylineType
{
	Rect,  // ����
	Circle,  // Բ
	Ellipse,  // ��Բ
	//Line,  // �߶�
	Polyline,      // ����
	Polygon,      // �����
	Arc,      // Բ��
	Path,  // ���ߣ�����·�� 

};


// ��ŵ���������SVG���μ���https://www.runoob.com/svg/svg-rect.html

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
	int m_nType;  // ����������
	//double m_r;  // ��λ����,�������������궼�Ըó���Ϊ��λ����

	// ��������
	std::vector<double> m_params;


};





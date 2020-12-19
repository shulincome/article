#pragma once
#include <vector>
//#include <list>
#include <string>

#include "MPolyline.h"


using std::string;

// ��ŵļ���ͼ��
class MMarkShape
{
public:
	MMarkShape();
	~MMarkShape();

	void Init(double _width, double _height);
	// ���һ������ͼ����
	MPolyline* AddPolyline(int nType);

	// FOR DEBUG: ���SVG�ļ�����鴴����ͼ���Ƿ���ȷ
	void OutputSvg(const char* fileName);

private:
	void ClearPolylines();

private:

	// ����ͼ���߼���
	std::vector<MPolyline*> m_polylines;
	// ԭ������
	MPoint m_orgPoint;
	// ��ת�Ƕ�
	double m_dAngle;
	// ��Ӿ��ο�
	double m_width;
	// ��Ӿ��θ�
	double m_height;


};


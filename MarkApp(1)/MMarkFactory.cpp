#include "stdafx.h"
#include "MMarkFactory.h"
#include "MMath.h"

MMarkFactory::MMarkFactory()
{
}


MMarkFactory::~MMarkFactory()
{
	//// �����ڴ�  std::map<string, MMark*> m_markPool;
	//map<string, MMark*>::iterator it;
	//for (it = m_markPool.begin(); it != m_markPool.end(); ++it)
	//{
	//	MMark* data = it->second;
	//	if (data != NULL)
	//	{
	//		delete[] data;
	//		it->second = NULL;
	//	}
	//}
	//m_markPool.clear();

}

MMark* MMarkFactory::CreateMark(string code)
{
	//MMark* pMark = NULL;
	//if (m_markPool.count(code) <= 0)
	//{
	//	m_markPool[code] = new MMark(code);
	//}
	//pMark = m_markPool[code];
	//return pMark;
	return NULL;

}

// ����Mart 010101
void MMarkFactory::CreateMark_010101(double width, double height)
{
	char _CODE[] = "010101";  // ����
	//MMark* pMark = CreateMark(_CODE);
	//MMarkShape& shape = pMark->GetShape();
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);
	
	// ���ɱ�ż���ͼ��----------------------------------------------
	// V������
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	double M = width / 3;
	double R = M / 4;
	double Y = 0.866 * M;
	pPoly1->points.push_back(MPoint(-1.5 * M, Y));
	pPoly1->points.push_back(MPoint(-0.5 * M, Y));
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(0.5 * M, Y));
	pPoly1->points.push_back(MPoint(1.5 * M, Y));
	
	// Բ----------------------------------------------------------------------
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Circle);
	double cx = 0;
	double cy = Y;
	pPoly2->AddParams(cx);  // ����x
	pPoly2->AddParams(cy);  // ����y
	pPoly2->AddParams(R);  // Բ�뾶

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}



// ����Mart 010102
void MMarkFactory::CreateMark_010102(double width, double height)
{
	char _CODE[] = "010102";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double M = width / 5;
	double R = width / 2;
	double Y1 = height;
	double Y2 = Y1 * 0.8;
	// �� ��
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(-M, Y2));
	pPoly1->points.push_back(MPoint(M, Y2));
	// | ��
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(0, Y1));
	pPoly2->points.push_back(MPoint(0, 0));
	// Բ��
	double Y3 = R * (1 - sin(10 * G_DEG2RAD));
	double X3 = R * cos(10 * G_DEG2RAD);
	MPolyline* pPoly3 = shape.AddPolyline(PolylineType::Arc);
	//pPoly3->points.push_back(MPoint(-R, R));  // ��ʱ����ʼ��
	//pPoly3->points.push_back(MPoint(R, R));  // ��ʱ����ֹ��
	pPoly3->points.push_back(MPoint(-X3, Y3));  // ��ʱ����ʼ��
	pPoly3->points.push_back(MPoint(X3, Y3));  // ��ʱ����ֹ��
	pPoly3->AddParams(R);  // Բ���뾶

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}

// ����Mart 61
void MMarkFactory::CreateMark_61(double width, double height)
{
	char _CODE[] = "61";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double Y = height / 4; //�����γ���ΪY
	double X = Y*0.866;    
	// ֱ�ӻ�������߿�
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polygon);
	pPoly1->points.push_back(MPoint(-X, Y/2));
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(2 * Y, 0));
	pPoly1->points.push_back(MPoint(2 * Y, Y));
	pPoly1->points.push_back(MPoint(0, Y));

	// |��
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(0, 0));
	pPoly2->points.push_back(MPoint(0, Y));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
// ����Mart 62
void MMarkFactory::CreateMark_62(double width, double height)
{
	char _CODE[] = "62";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double Y = height / 4; //�����γ���ΪY
	double X = Y * 0.866;
	// ֱ�ӻ�������߿�
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polygon);
	pPoly1->points.push_back(MPoint(-X, Y / 2));
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(2 * Y, 0));
	pPoly1->points.push_back(MPoint(2 * Y, Y));
	pPoly1->points.push_back(MPoint(0, Y));

	// |��
	//MPolyline * pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	//pPoly2->points.push_back(MPoint(0, 0));
	//pPoly2->points.push_back(MPoint(0, Y));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}

// ����Mart 63
void MMarkFactory::CreateMark_63(double width, double height)
{
	char _CODE[] = "63";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double Y = height / 4; //�����γ���ΪY
	double X = Y * 0.866;
	//�ұ���߿�
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polygon);
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(2 * Y, 0));
	pPoly1->points.push_back(MPoint(2 * Y, Y));
	pPoly1->points.push_back(MPoint(0, Y));

	// ������������
	MPolyline * pPoly2 = shape.AddPolyline(PolylineType::Polygon);
	pPoly2->points.push_back(MPoint(-X, Y / 2));
	pPoly2->points.push_back(MPoint(0, 0));
	pPoly2->points.push_back(MPoint(0, Y));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}

//���� Mark_65
void MMarkFactory::CreateMark_65(double width, double height)
{
	char _CODE[] = "65";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double Y = height / 2; 

	// ֱ����������
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polygon);
	pPoly1->points.push_back(MPoint(-2*Y, Y/2));
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(0, Y));



	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_67
void MMarkFactory::CreateMark_67(double width, double height)
{
	char _CODE[] = "67";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɱ�ż���ͼ��----------------------------------------------
	double X = width / 3;

	// ֱ�����ĸ���
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polygon);
	pPoly1->points.push_back(MPoint(0, 0));
	pPoly1->points.push_back(MPoint(3*X, 0));
	pPoly1->points.push_back(MPoint(2*X, X));
	pPoly1->points.push_back(MPoint(0, X));



	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_68
void MMarkFactory::CreateMark_68(double width, double height)
{
	char _CODE[] = "68";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	// ���ɳ��̰뾶----------------------------------------------
	double A = width;   //���뾶

	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Arc);
	pPoly1->AddParams(5*A/8);
	pPoly1->points.push_back(MPoint(A/2, A / 4.5));
	pPoly1->points.push_back(MPoint(-A/2, A / 4.5));

	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Arc);
	pPoly2->AddParams(5 * A / 8);

	pPoly2->points.push_back(MPoint(-A / 2, A / 4));
	pPoly2->points.push_back(MPoint(A / 2, A / 4));


	// �ϰ뻡��
	/*MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Arc);
	pPoly1->points.push_back(MPoint(-X, 0));
	pPoly1->points.push_back(MPoint(X, 0));*/



	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}

//���� Mark_70
void MMarkFactory::CreateMark_70(double width, double height)
{
	char _CODE[] = "70";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0,height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353*height, 0.313*height));
	pPoly2->points.push_back(MPoint(0,2*height/3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));
	
	//С����
	MPolyline* pPoly3 = shape.AddPolyline(PolylineType::Polygon);
	pPoly3->points.push_back(MPoint(0, height));
	pPoly3->points.push_back(MPoint(0.25*height,6*height / 7));
	pPoly3->points.push_back(MPoint(0, 6 * height /7));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_71
void MMarkFactory::CreateMark_71(double width, double height)
{
	char _CODE[] = "71";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//СԲ
	MPolyline* pPoly3 = shape.AddPolyline(PolylineType::Circle);
	double cx = 0;
	double cy = 0;
	double R = 0.125 * height;
	pPoly3->AddParams(cx);
	pPoly3->AddParams(cy);
	pPoly3->AddParams(R);

	//����
	MPolyline* pPoly4 = shape.AddPolyline(PolylineType::Polyline);
	pPoly4->points.push_back(MPoint(-0.125*height,-0.2*height));
	pPoly4->points.push_back(MPoint(0, 0));
	pPoly4->points.push_back(MPoint(0.125 * height, -0.2 * height));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}

//���� Mark_72
void MMarkFactory::CreateMark_72(double width, double height)
{
	char _CODE[] = "72";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//����
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Polyline);
	pPoly3->points.push_back(MPoint(-0.117* height, -0.104* height));
	pPoly3->points.push_back(MPoint(0, 0));
	pPoly3->points.push_back(MPoint(0.117 * height, -0.104* height));


	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_73
void MMarkFactory::CreateMark_73(double width, double height)
{
	char _CODE[] = "73";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//������
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Polygon);
	double A = 0.2 * height; //�߳�
	pPoly3->points.push_back(MPoint(-A/2, -0.866*A));
	pPoly3->points.push_back(MPoint(0, 0));
	pPoly3->points.push_back(MPoint(A/2, -0.866* A));

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_74
void MMarkFactory::CreateMark_74(double width, double height)
{
	char _CODE[] = "74";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//СԲ
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Circle);
	double R = 0.1 * height; //�뾶
	double cx = 0;  //x����
	double cy = -0.7*R; //Y����
	pPoly3->AddParams(cx);
	pPoly3->AddParams(cy);
	pPoly3->AddParams(R);

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_75
void MMarkFactory::CreateMark_75(double width, double height)
{
	char _CODE[] = "75";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//СԲ
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Circle);
	double R = 0.1 * height; //�뾶
	double cx = 0;  //x����
	double cy = -0.7 * R; //Y����
	pPoly3->AddParams(cx);
	pPoly3->AddParams(cy);
	pPoly3->AddParams(R);

	//����
	MPolyline* pPoly4 = shape.AddPolyline(PolylineType::Polyline);
	pPoly4->points.push_back(MPoint(-R, 0.1 * height));
	pPoly4->points.push_back(MPoint(R, 0.1*height));

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_76
void MMarkFactory::CreateMark_76(double width, double height)
{
	char _CODE[] = "76";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//�̺���
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Polyline);
	pPoly3->points.push_back(MPoint(-0.125 * height, 0));
	pPoly3->points.push_back(MPoint(0.125* height,0));

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}
//���� Mark_79
void MMarkFactory::CreateMark_79(double width, double height)
{
	char _CODE[] = "79";  // ����
	MMark mark;
	MMarkShape& shape = mark.GetShape();
	shape.Init(width, height);

	//����
	MPolyline* pPoly1 = shape.AddPolyline(PolylineType::Polyline);
	pPoly1->points.push_back(MPoint(0, height));
	pPoly1->points.push_back(MPoint(0, 0));

	//����
	MPolyline* pPoly2 = shape.AddPolyline(PolylineType::Polyline);
	pPoly2->points.push_back(MPoint(-0.353 * height, 0.313 * height));
	pPoly2->points.push_back(MPoint(0, 2 * height / 3));
	pPoly2->points.push_back(MPoint(0.353 * height, 0.313 * height));

	//����
	MPolyline * pPoly3 = shape.AddPolyline(PolylineType::Polygon);
	pPoly3->points.push_back(MPoint(-0.125 * height, 0));
	pPoly3->points.push_back(MPoint(0.125 * height, 0));
	pPoly3->points.push_back(MPoint(0.125 * height, -0.125*height));
	pPoly3->points.push_back(MPoint(-0.125 * height, -0.125 * height));

	// FOR DEBUG: ������ļ�
	shape.OutputSvg(_CODE);

	//return pMark;

}








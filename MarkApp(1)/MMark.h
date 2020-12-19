#pragma once

#include <string>

#include "MMarkShape.h"

using std::string;


// ���
class MMark
{
public:
	MMark();
	MMark(string code);
	//virtual ~MMark() { };
	~MMark();

	MMarkShape& GetShape() { return m_shape; }

private:

	// ���ɳ�ʼ����ͼ��
	void CreateShape();
	//virtual void WriteSVG() = 0;


private:
	int m_nType;  // ����
	int m_nSequence;  // ���
	string m_sCode;  // ����
	string m_sName;  // ����

	MMarkShape m_shape;  // ����ͼ��




	// ���Լ���



};


#pragma once

#include <map>
#include "MMark.h"


using std::map;


class MMarkFactory
{
public:
	MMarkFactory();
	~MMarkFactory();

	static MMark* CreateMark(string code);

	// ����Mart 010101
	static void CreateMark_010101(double width = 100, double height = 100);

	// ����Mart 010102
	static void CreateMark_010102(double width = 100, double height = 100);

	// ����Mart 61
	static void CreateMark_61(double width = 100, double height = 100);

	// ����Mart 62
	static void CreateMark_62(double width = 100, double height = 100);
	
	// ����Mart 63
	static void CreateMark_63(double width = 100, double height = 100);

	//����65
	static void CreateMark_65(double width = 100, double height = 100);
	
	//����67
	static void CreateMark_67(double width = 100, double height = 100);

	//����68
	static void CreateMark_68(double width = 100, double height = 100);

	//����70
	static void CreateMark_70(double width = 100, double height = 100);
	
	//����71
	static void CreateMark_71(double width = 100, double height = 100);
	//����72
	static void CreateMark_72(double width = 100, double height = 100);

	//����73
	static void CreateMark_73(double width = 100, double height = 100);

	//����74
	static void CreateMark_74(double width = 100, double height = 100);

	//����75
	static void CreateMark_75(double width = 100, double height = 100);

	//����76
	static void CreateMark_76(double width = 100, double height = 100);
	//����79
	static void CreateMark_79(double width = 100, double height = 100);

private:

	//static std::map<string, MMark*> m_markPool;

};


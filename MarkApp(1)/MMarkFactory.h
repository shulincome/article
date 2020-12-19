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

	// 创建Mart 010101
	static void CreateMark_010101(double width = 100, double height = 100);

	// 创建Mart 010102
	static void CreateMark_010102(double width = 100, double height = 100);

	// 创建Mart 61
	static void CreateMark_61(double width = 100, double height = 100);

	// 创建Mart 62
	static void CreateMark_62(double width = 100, double height = 100);
	
	// 创建Mart 63
	static void CreateMark_63(double width = 100, double height = 100);

	//创建65
	static void CreateMark_65(double width = 100, double height = 100);
	
	//创建67
	static void CreateMark_67(double width = 100, double height = 100);

	//创建68
	static void CreateMark_68(double width = 100, double height = 100);

	//创建70
	static void CreateMark_70(double width = 100, double height = 100);
	
	//创建71
	static void CreateMark_71(double width = 100, double height = 100);
	//创建72
	static void CreateMark_72(double width = 100, double height = 100);

	//创建73
	static void CreateMark_73(double width = 100, double height = 100);

	//创建74
	static void CreateMark_74(double width = 100, double height = 100);

	//创建75
	static void CreateMark_75(double width = 100, double height = 100);

	//创建76
	static void CreateMark_76(double width = 100, double height = 100);
	//创建79
	static void CreateMark_79(double width = 100, double height = 100);

private:

	//static std::map<string, MMark*> m_markPool;

};


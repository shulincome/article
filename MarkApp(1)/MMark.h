#pragma once

#include <string>

#include "MMarkShape.h"

using std::string;


// 标号
class MMark
{
public:
	MMark();
	MMark(string code);
	//virtual ~MMark() { };
	~MMark();

	MMarkShape& GetShape() { return m_shape; }

private:

	// 生成初始几何图形
	void CreateShape();
	//virtual void WriteSVG() = 0;


private:
	int m_nType;  // 类型
	int m_nSequence;  // 序号
	string m_sCode;  // 编码
	string m_sName;  // 名称

	MMarkShape m_shape;  // 几何图形




	// 属性集合



};


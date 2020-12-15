#pragma once

#include <iostream>
#include <string>
using namespace std;
class Parse
{
public:
	Parse();
	Parse(string  str);
	~Parse();
	int getFirst();
	int getLast();

private:
	std::string m_str;
	int len;	//字符串长度
	int pos;	//"-"所在位置
	int posNumFirst; //第一字数字所在位置
	int posNumLast;
};

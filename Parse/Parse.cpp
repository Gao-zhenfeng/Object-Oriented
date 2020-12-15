// Parse.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Parse.h"

using namespace std;

Parse::Parse()
{
	m_str = "";
}
Parse::Parse(string str)
{
	m_str = str;
	len = m_str.length();
	pos = m_str.find("-");
	posNumFirst = m_str.find_first_of("0123456789");
	posNumLast = m_str.find_last_of("0123456789");
}
Parse::~Parse()
{
}
int Parse::getFirst()
{
	string s1;
	int forward;
	s1 = m_str.substr(posNumFirst, pos - posNumFirst + 1);
	forward = stoi(s1);

	return forward;
}

int Parse::getLast()
{
	string s2;
	int later;
	s2 = m_str.substr(pos + 1, posNumLast);
	later = stoi(s2);

	return later;
}
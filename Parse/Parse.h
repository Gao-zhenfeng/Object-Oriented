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
	int len;	//�ַ�������
	int pos;	//"-"����λ��
	int posNumFirst; //��һ����������λ��
	int posNumLast;
};

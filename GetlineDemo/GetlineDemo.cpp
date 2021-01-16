// GetlineDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
	//打开文件
	std::filesystem::path p{ "greatwall.txt" };
	ifstream in{ p };
	if (!in)
	{
		cout << "Can not open file " << p << endl;
		std::abort();
	}
	//任务1: istream::getline函数
	constexpr int SIZE = 1024;
	std::array<char, SIZE> buf;
	while (!in.eof())
	{
		in.getline(&buf[0], SIZE, '#');//从流释出字符，直至行尾或指定的分隔符 delim
		cout << &buf[0] << endl;
	}
	in.close();
	//任务2： std::getline函数
	in.open(p);
	std::string name1{ "" };
	while (!in.eof())
	{
		std::getline(in, name1, '#');//从流中读取字符串，直到遇到#,把所读到的string存到 name1中
		cout << name1 << endl;
	}
	return 0;
}
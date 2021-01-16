﻿// FileOpenMode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;
int main()
{
	using fo = std::ios;
	fs::path p1{ "city1.txt" }, p2{ "city2.txt" };
	//创建两个输出文件流，分别为app和trunc模式
	std::ofstream out1{ p1, std::ios::out | std::ios::app };
	std::ofstream out2{ p2, fo::out | fo::trunc };
	if (out1.fail() && out2.fail())
	{
		std::cout << "can't open file " << std::endl;
	}
	//从键盘读入字符，输出到两个文件流中
	char c;
	while (!std::cin.get(c).eof())
	{
		out1.put(c);
		out2.put(c);
	}
	//关闭文件流
	out1.close();
	out2.close();
	//读模式打开两个IO文件流，其中一个使用ate模式
	std::fstream in1{ p1, fo::in };
	std::fstream in2{ p2, fo::in | fo::ate };

	//输出两个文件的内容
	std::cout << p1 << std::endl;
	while (!in1.get(c).eof())
	{
		std::cout << c;
	}

	std::cout << p2 << std::endl;
	while (!in2.get(c).eof())
	{
		std::cout << c;
	}
	//关闭IO文件流
	in1.close();
	in2.close();
	return 0;
}
// PathSpace.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
展示如何获取磁盘空间任务信息
使用filesystem::space()函数，获取某路径所在分区的
space_info对象，然后显示磁盘分区信息
*/
#include <iostream>
#include <string>
#include <filesystem>

using std::cout;
using std::endl;

int main()
{
	namespace fs = std::filesystem;
	//定义路径对象
	fs::path p{ "C:\\" };
	//展示磁盘的总大小和剩余大小
	cout << "C: total space: " << fs::space(p).capacity << endl;
	cout << "C: free space: " << fs::space(p).available << endl;

	return 0;
}
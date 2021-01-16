// FileInput.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
任务一： 读文件
1. 创建文件输入流，打开score.txt
2.用>>从文件读数据

任务二： 使用fail()函数检测文件是否打开

任务三： 将文件语句放入循环，使用eof()作为循环条件

关闭文件
*/

#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

int main()
{
	fs::path p{ "score.txt" };

	ifstream input{ p };
	if (input.fail())
	{
		cout << " Can't open file." << endl;
		return 0;
	}
	string name{ "" };
	double score{ 0.0 };
	char x;
	while (!input.get(x).eof())
	{
		cout << x;
	}
	/*input >> name >> score;
	cout << name << " " << score << endl;
	input >> name >> score;
	cout << name << " " << score << endl;
	input >> name >> score;
	cout << name << " " << score << endl;*/
	input.close();
	return 0;
}
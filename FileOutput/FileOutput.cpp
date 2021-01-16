// FileOutput.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
1.创建文件输出流

2.向文件写数据

3.关闭文件

4.用文本编辑器打开文件，对比代码语句检查结果
*/

#include <iostream>
#include <fstream>
#include <filesystem>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
namespace fs = std::filesystem;
int main()
{
	fs::path p{ "score.txt" };
	ofstream fout{ p };	//在当前路径创建一个score.txt文件
	double lileiScore{ 90.5 };
	int hanmeimeiScore{ 84 };

	fout << "Lillei " << lileiScore << endl;//write
	fout << "HanMeiMei " << hanmeimeiScore << endl;

	fout.close();
	cout << "size of" << p << "is : " << fs::file_size(p) << endl;

	std::cin.get();
	return 0;
}
// HomeWork.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
	fs::path out{ "out.txt" };
	fs::path in{ "in.txt" };

	ofstream fout{ out }; //会出现out.txt
	ifstream fin{ in };//in.txt doesn't exist
	if (fin.fail())
	{
		cout << "in.txt does not exist" << endl;
		return -1;
	}
	else
	{
		cout << "in.txt exists" << endl;
	}

	fin.close();
	fout.close();
	return 0;
}
// FileIO.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;

	cout << "Enter name for new file: " << endl;
	cin >> filename;

	ofstream fout{ filename.c_str() };
	fout << "For your eyes only" << endl;
	cout << "Enter your secret number: " << endl;
	float secret;
	cin >> secret;
	fout << "Your secret number is: " << secret << endl;
	fout.close();

	ifstream fin{ filename.c_str() };
	cout << "Here are the contents of " << filename << ":\n";
	char ch;
	while (fin.get(ch))
	{
		cout << ch;
	}
	cout << "Done\n";
	fin.close();

	return 0;
}
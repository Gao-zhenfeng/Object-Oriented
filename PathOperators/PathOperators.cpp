// PathOperators.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//展示path相关的一些特殊运算符的用法
// /= += /

#include <iostream>
#include <filesystem>
#include <string>
using namespace std;

int main()
{
	namespace fs = std::filesystem;
	//定义路径对象
	fs::path p1{ R"(E:\Program\C++练习\class_exe\PathOperators)" };
	fs::path p2{ R"(E:\Program\C++练习\class_exe\PathOperators)" };
	fs::path p3{ "" };

	//append and /=
	p1.append(R"(users)");
	p1 /= R"(cyd)";
	cout << p1 << endl;
	//concat and +=
	p2.concat(R"(users)");//users前面没有"\\"
	p2 += R"(cyd)";

	cout << p2 << endl;
	//用运算符拼凑一个新路径
	p3 = p3 / R"(E:\Program\C++练习\class_exe\PathOperators)" / R"(users)" / R"(cyd)";

	cout << p3 << endl;
	return 0;
}
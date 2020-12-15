// StructuredBinding2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
using namespace std::string_literals;

//定义结构体，包含double和int成员
struct S	//class S{public:
{
	double d1{ 1.0 };
	int i1{ 32 };
};
//定义类，包含int和字符数组成员c
class C
{
public:
	C() = default;
	~C() = default;

	int i2{ 1 };
	char c[3]{ 'a','b','\0' };
};

int main()
{
	//定义结构体和类对象
	S s;
	C c;
	//绑定结构体 变量
	auto [d1, i1] {s};

	//以引用形式绑定类对象成员
	auto& [i2, c2] {c};
	cout << "s.d1 = " << d1 << " s.i1 = " << i1 << endl;
	cout << "c.i2 = " << i2 << " c.c2 = " << c2 << endl;

	std::string s1 = "Hello\0World";
	auto s2 = "Hello\0World"s;
	cout << "s1 " << s1.size() << endl;//5
	cout << "s2 " << s2.size() << endl;//11

	return 0;
}
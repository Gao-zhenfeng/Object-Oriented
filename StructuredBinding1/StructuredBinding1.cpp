// StructuredBinding1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <array>
using namespace std;
int main()
{
	array a{ 1,2,3 };
	array<int, 2> b{ 11,12 };
	auto& [e1, e2, e3] = a;
	//auto const [f1, f2, f3] {a};
	a[0] = 10;
	cout << e1 << " " << e2 << " " << e3 << endl;
	return 0;
}
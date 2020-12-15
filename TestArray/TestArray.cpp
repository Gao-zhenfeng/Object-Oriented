// TestArray.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void print(array<int, 3>& a)
{
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;
}

int search(array<int, 3>& a, int token)
{
	bool exist{ false };
	for (int i = 0; i < (int)a.size(); i++)
	{
		if (a[i] == token)
		{
			exist = true;
			return i;
			break;
		}
	}
	return -1;
}
int main()
{
	//1.创建数组
	std::array a1 = { 12,2,3 };
	print(a1);

	//2.为数组赋值
	a1 = { 4,5,6 };
	print(a1);

	//3.交换数组
	array b1{ 100,2343,666 };
	print(b1);

	a1.swap(b1);//swap data
	print(a1);
	print(b1);
	//4.求数组大小
	cout << a1.size() << endl; //3
	cout << a1.max_size() << endl;//3
	//5.编写search函数，在数组中查找一个值
	cout << "search 233: " << search(a1, 233) << endl;
	cout << "search 2: " << search(a1, 2) << endl;
	//6.sort
	sort(a1.begin(), a1.end());
	print(a1);
	//7.二维数组
	//std::array<std::array<int, 3>, 4> a8;

	return 0;
}
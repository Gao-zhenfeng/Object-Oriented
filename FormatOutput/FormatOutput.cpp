// FormatOutput.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

int main()
{
	//assignment 1: show setw()&setfill()
	cout << std::setw(4) << std::setfill('#') << "a" << endl;
	cout << std::setfill('#');
	for (int i = 0; i < 5; i++)
	{
		cout << std::setw(static_cast<std::streamsize>(i) + 2) << ' ' << endl;
	}
	//assignment 2: show setprecision, fixed, showpoint, left, right
	double pi = 3.141592653;
	cout << std::setprecision(6) << pi << endl;//setprecision()对后面输出都有效
	cout << std::setprecision(6) << std::fixed << pi << endl;//使用fixed后小数点后位数是n
	int num = 10;
	cout << num << endl;
	double y = 3.0;
	cout << y << endl;
	cout << std::showpoint << y << endl;

	cout << std::setw(20) << std::left << pi << endl;//setw()仅对当前行有效
	cout << std::setw(20) << std::right << pi << endl;//因为前面已经设置了六位精度

	//assignment 3: show hexfloat
	double x = 3.0;
	cout << std::hexfloat << x << endl;
	cout << std::defaultfloat;
	cout << x << endl;
	cout << std::showpoint << x << endl;
	return 0;
}
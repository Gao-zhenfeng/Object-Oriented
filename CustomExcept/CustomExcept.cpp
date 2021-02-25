// CustomExcept.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Vec3D.h"
#include "RangeException.h"
using namespace std;

int main()
{
	Vec3D v1{ 1.2, 3.2, 4.3 };
	try {
		cout << v1[4] << endl;
	}
	catch (exception& e)
	{
		cout << "Exception: " << e.what() << endl;
		if (typeid(e) == typeid(RangeException))
		{
			auto r = dynamic_cast<RangeException&> (e);
			cout << "Vector Dimension: " << r.getDimension() << endl;
			cout << "Vextor index: " << r.getIndex() << endl;
		}
	}
}
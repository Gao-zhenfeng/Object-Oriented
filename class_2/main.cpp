#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
	Circle c1;
	Circle c2{ 5.0 };
	auto pc3 = new Circle{ 1.0 };//在堆（heap)上创建对象
	Circle* pc4 = &c2;			 //auto自动推断类型

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
	cout << (*pc3).getArea() << endl;//解引用
	cout << pc3->getArea() << endl;
	cout << pc4->getArea() << endl;

	auto c5 = new Circle[3]{ 1.0,2.0,3.0 };
	for (int i = 0; i < 3; i++)
	{
		cout << c5[i].getArea() << endl;
	}

	delete pc3;
	delete[] c5;

	pc3 = c5 = nullptr;

	delete pc3;	//delete nullptr is allowed

	return 0;
}
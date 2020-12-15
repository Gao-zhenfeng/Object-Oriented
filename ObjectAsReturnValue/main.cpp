#include <iostream>
#include "E:\Program\C++Á·Ï°\class_exe\ObjectAsArguement\Circle.h"
using namespace std;

int main()
{
	Circle c{ 1.0 };

	cout << c.setRadius(2.0)
		.setRadius(3.0)
		.getArea() << endl;

	return 0;
}
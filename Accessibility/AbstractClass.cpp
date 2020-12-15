#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

using std::cout;
using std::endl;

int main()
{
	//Shape s{ Color::black,true }; 不能实例化
	Circle c{ 1.2,Color::blue,false };
	Rectangle r{ 1.1,2.0,Color::green,true };

	Shape* p = &c;
	cout << p->getArea() << endl;

	cout << c.getArea() << endl;
	cout << r.getArea() << endl;
	return 0;
}
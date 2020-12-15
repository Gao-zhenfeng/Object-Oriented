#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Shape s1{ Color::blue,false };
	Circle c1{ 3.9,Color::white, true };
	Rectangle r1{ 4.1,2.0, Color::yellow, true };

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	std::cout << "c1 area" << c1.getArea() << std::endl;

	return 0;
}
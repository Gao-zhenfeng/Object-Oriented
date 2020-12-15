#include <iostream>
#include <string>
#include <iomanip>
#include "C.h"

C::C() :C(3.8)
{
	std::cout << "C()" << std::endl;
}

C::C(int x)
{
	this->x = x;
	std::cout << "C(" << std::to_string(x) << ")" << std::endl;
}

C::C(double d) : C{ static_cast<int> (d) }
{
	std::cout << "C(" << std::to_string(d) << ")" << std::endl;
}
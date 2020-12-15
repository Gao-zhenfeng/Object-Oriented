#include <iostream>
#include <string>
#include "C.h"

C::C() :C(42)
{
	std::cout << "C()" << std::endl;
}

C::C(int x)
{
	this->x = x;
	std::cout << "C(" << std::to_string(x) << ")" << std::endl;
}
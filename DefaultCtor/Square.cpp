#include "Square.h"

Square::Square()
{
	side = 0;
}

Square::~Square()
{
}

double Square::getArea()
{
	return side * side;
}
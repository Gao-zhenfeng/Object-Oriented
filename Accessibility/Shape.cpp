#include "Shape.h"
#include <iostream>
#include <array>
#include <string>
using std::string;
using namespace std::string_literals;

Shape::Shape(Color color_, bool filled_)
{
	color = color_;
	filled = filled_;
}
Color Shape::getColor() { return color; }
void Shape::setColor(Color color_) { color = color_; }
bool Shape::isFilled() { return filled; }
void Shape::setFilled(bool filled_) { filled = filled_; }

string Shape::toString()
{
	std::array<string, 6> c{ "white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s };
	return "shape: " + c[static_cast<int>(color)] + " " + (filled ? "filled"s : "not filled"s);
}

string Shape::colorToString()
{
	return	colorNames[static_cast<int>(color)];
}
string Shape::filledToString()
{
	return (filled ? "filled"s : "not filled"s);
}
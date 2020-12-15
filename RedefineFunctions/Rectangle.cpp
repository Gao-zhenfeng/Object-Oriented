#include "Rectangle.h"

Rectangle::Rectangle(double w, double h, Color color_, bool filled_) :Shape{ color_,filled_ } {
	width = w;
	height = h;
}

double Rectangle::getWidth()const {
	return width;
}
void Rectangle::setWidth(double w) {
	width = w;
}
double Rectangle::getHeight()const {
	return height;
}
void Rectangle::setHeight(double h) {
	height = h;
}

double Rectangle::getArea()const {
	return height * width;
}

string Rectangle::toString() {
	return ("Rectangle: width " + std::to_string(width) + " height "
		+ std::to_string(height) + ","
		+ colorToString() + " " + filledToString());
}
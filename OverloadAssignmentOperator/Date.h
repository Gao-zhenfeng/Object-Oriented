#pragma once
//assignment 1:definate class date
#include <iostream>
#include <string>

class Date
{
public:
	int getYear();
	int getMonth();
	int getDay();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
	Date() = default;
	Date(int y, int m, int d);
	std::string toString();
	//~Date() {};

private:
	int year{ 2000 }, month{ 1 }, day{ 1 };
};

#include <iostream>
#include <array>
#include "Circle.h"
using namespace std;

int main()
{
	array<Circle, 10> arr{ 1.0,2.0,3.0,4.0,5.0 };
	double sum1 = 0.0;
	for (auto x : arr)
	{
		sum1 += x.getArea();
	}
	double sum2 = 0.0;
	for (int i = 0; i < 10; i++)
	{
		sum2 += arr[i].getArea();
	}
	cout << "sum1: " << sum1 << endl;
	cout << "sum2: " << sum2 << endl;

	return 0;
}
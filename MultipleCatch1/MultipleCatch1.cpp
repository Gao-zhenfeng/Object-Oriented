#include <iostream>
#include "Vec3D.h"
#include "RangeException.h"
using namespace std;

int main()
{
	Vec3D v1{ 1.2, 3.2, 4.3 };
	try {
		//cout << v1[3] << endl;
		cout << (v1 / 0.0)[0] << endl;
	}
	catch (RangeException& e)
	{
		cout << "Exception: " << e.what() << endl;
		cout << "Vector Dimension: " << e.getDimension() << endl;
		cout << "Vextor index: " << e.getIndex() << endl;
	}
	catch (ZeroException& e)
	{
		cout << "Exception: " << e.what() << endl;
	}
}
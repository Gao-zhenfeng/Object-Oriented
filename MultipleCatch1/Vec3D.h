#pragma once
#include <array>
#include <string>
#include <cmath>
#include <limits>
#include <iostream>
#include "RangeException.h"
#include "ZeroException.h"

class Vec3D
{
public:
	constexpr static std::size_t Dimension = 3;
private:
	std::array <double, Dimension> v{ 1.0, 1.0, 1.0 };

	bool isSame(double a, double b)
	{
		return std::fabs(a - b) < std::numeric_limits<double>::epsilon();
	}
public:
	Vec3D() = default;
	Vec3D(double x, double y, double z)
	{
		v[0] = x;
		v[1] = y;
		v[2] = z;
	}
	double operator [] (const int index)
	{
		if (index >= 0 && index <= 2)
			return v[index];
		else
		{
			throw RangeException(3, index);
		}
	}

	Vec3D operator / (const double divisior)
	{
		Vec3D t(*this);
		if (isSame(divisior, 0.0))
			throw ZeroException();
		else
		{
			for (auto& i : t.v) {
				i /= divisior;
			}
		}
		return t;
	}
};

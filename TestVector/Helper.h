#pragma once
#include <vector>
#include <string>
#include <iostream>

/*
https://en.cppreference.com/w/cpp/container/vector/vector
*/
#define PRINT(x) std::cout<<#x<<": "<<x<<std::endl;

template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<T>& v)
{
	s.put('[');
	char comma[3] = { '\0', ' ', '\0' };
	for (const auto& e : v) {
		s << comma << e;
		comma[0] = ',';
	}
	return s << ']';
}
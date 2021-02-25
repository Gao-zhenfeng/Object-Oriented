#pragma once

#include <stdexcept>
#include <exception>

class ZeroException : public std::runtime_error
{
public:
	ZeroException() : runtime_error("Divide by 0.0 ") {}
	ZeroException(const char* msg) : runtime_error(msg) {}
};

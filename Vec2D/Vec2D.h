#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <exception>
using std::ostream;
using std::istream;
using std::endl;
class Vec2D
{
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
private:
	double x_;
	double y_;
public:
	// 将向量转换为字符串显示
	std::string toString();
	// 向量加法
	Vec2D add(const Vec2D& secondVec2D);
	Vec2D add(double numeral);
	Vec2D operator+ (const Vec2D& secondVec2D);
	Vec2D operator+ (const double numeral);
	Vec2D& operator+= (const Vec2D& secondVec2D);//v1+=3.0+=v2; 不考虑这种情况
	// 获取向量元素
	double& at(const int index);
	double& operator[](const int& index);

	// 比较两个向量
	int compareTo(Vec2D secondVec2D);
	// 向量减法
	Vec2D subtract(const Vec2D& secondVec2D);
	Vec2D subtract(double numeral);
	Vec2D operator- (const Vec2D& secondVec2D);
	Vec2D operator- (double numeral);
	Vec2D& operator-= (const Vec2D& secondVec2D);

	// 向量点乘
	double dot(const Vec2D& secondVec2D);
	// 向量数乘
	Vec2D multiply(double multipilier);
	Vec2D operator* (double multipilier);
	double operator* (const Vec2D& secondVec2D);
	friend Vec2D operator* (double multipiler, Vec2D vec2d);
	// 向量取负值
	Vec2D negative();
	Vec2D operator- ();
	// 向量自增1
	Vec2D& increase();
	Vec2D& operator++ ();
	Vec2D operator++ (int dummy);
	// 向量自减1
	Vec2D& decrease();
	Vec2D& operator-- ();

	// 向量范数（长度）
	double magnitude();
	operator double();
	// 求向量与x+轴的夹角
	double direction();
	friend ostream& operator <<(ostream& os, const Vec2D& v);
	friend istream& operator >>(istream& os, Vec2D& v);
};

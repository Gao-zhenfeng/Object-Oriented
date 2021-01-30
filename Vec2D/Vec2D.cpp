#include "Vec2D.h"

Vec2D::Vec2D()
{
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) : x_{ x }, y_{ y }
{
}

Vec2D::~Vec2D()
{
}

// 将向量转换为字符串显示
std::string Vec2D::toString()
{
	// TODO: 在此处添加实现代码.
	return std::string("(" + std::to_string(x_) + "," + std::to_string(y_) + ")");
}

// 向量加法
Vec2D Vec2D::add(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	double x = this->x_ + secondVec2D.x_;
	double y = this->y_ + secondVec2D.y_;
	return Vec2D(x, y); //返回的是临时的匿名对象
}

Vec2D Vec2D::add(double numeral)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

Vec2D Vec2D::operator+ (const Vec2D& secondVec2D)	//引用省去了对象拷贝的时间，提高了效率
{
	return this->add(secondVec2D);
}

Vec2D Vec2D::operator+ (const double numeral)	//double 加不加引用对效率影响不大，因为不存在对象拷贝问题
{
	return this->add(numeral);
}

Vec2D& Vec2D::operator+= (const Vec2D& secondVec2D)
{
	//v1+=3.0+=v2; 不考虑这种情况
	x_ += secondVec2D.x_;
	y_ += secondVec2D.y_;
	return (*this);
}

// 获取向量元素
double& Vec2D::at(const int index)
{
	// TODO: 在此处添加实现代码.
	//返回值是引用类型，既可以当成左值用又可以当成右值用
	if (index == 0)
		return x_;
	else if (index == 1)
		return y_;
	else
	{
		throw std::out_of_range("at() only 1 or 2 as parameter");
	}
}

double& Vec2D::operator[](const int& index)
{
	return at(index);
}

// 比较两个向量的长度，如果firstVec2D 小于secondVec2D， 返回-1，反之，返回1
int Vec2D::compareTo(Vec2D secondVec2D)
{
	// TODO: 在此处添加实现代码.
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10)
		return 0;
	else
		return (m1 > m2 ? 1 : -1);
}

// 向量减法
Vec2D Vec2D::subtract(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_ - secondVec2D.x_, y_ - secondVec2D.y_);
}

Vec2D Vec2D::subtract(double numeral)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_ - numeral, y_ - numeral);
}

Vec2D Vec2D::operator- (const Vec2D& secondVec2D)
{
	return this->subtract(secondVec2D);
}

Vec2D Vec2D::operator- (double numeral)
{
	return this->subtract(numeral);
}

Vec2D& Vec2D::operator-= (const Vec2D& secondVec2D)
{
	//v1-=3.0-=v2; 不考虑这种情况
	x_ -= secondVec2D.x_;
	y_ -= secondVec2D.y_;
	return (*this);
}

// 向量点乘
double Vec2D::dot(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return (x_ * secondVec2D.x_ + y_ * secondVec2D.y_);
}

double Vec2D::operator* (const Vec2D& secondVec2D)
{
	return this->dot(secondVec2D);
}

// 向量数乘
Vec2D Vec2D::multiply(double multipilier)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_ * multipilier, y_ * multipilier);
}

Vec2D Vec2D::operator* (double multipilier)
{
	return this->multiply(multipilier);
}

Vec2D operator* (double multipiler, Vec2D vec2d)
{
	return vec2d * multipiler;
}
// 向量取负值
Vec2D Vec2D::negative()
{
	// TODO: 在此处添加实现代码.
	return Vec2D(-x_, -y_);
}

Vec2D Vec2D::operator- ()
{
	return negative();
}

// 向量自增1
Vec2D& Vec2D::increase()
{
	// TODO: 在此处添加实现代码.
	x_++; y_++;
	return (*this);
}

Vec2D& Vec2D::operator++ ()
{
	x_ += 1; y_ += 1;
	return (*this);
}

Vec2D Vec2D::operator++ (int dummy)
{
	Vec2D temp{ *this };
	x_++; y_++;
	return temp;
}

// 向量自减1
Vec2D& Vec2D::decrease()
{
	// TODO: 在此处添加实现代码.
	x_--; y_--;
	return (*this);
}

Vec2D& Vec2D::operator-- ()
{
	x_--; y_--;
	return (*this);
}

// 向量范数（长度）
double Vec2D::magnitude()
{
	// TODO: 在此处添加实现代码.
	return sqrt(x_ * x_ + y_ * y_);
}

Vec2D::operator double()
{
	//重载类型转换运算符， 不需要又返回值
	return this->magnitude();
}

// 求向量与x+轴的夹角
double Vec2D::direction()
{
	// TODO: 在此处添加实现代码.
	return atan(y_ / x_);
}

ostream& operator <<(ostream& os, const Vec2D& v)
{
	//cout << v1;
	os << "(" << v.x_ << "," << v.y_ << ")" << std::endl;
	return os;
}

istream& operator >>(istream& is, Vec2D& v)
{
	is >> v.x_ >> v.y_;
	return is;
}
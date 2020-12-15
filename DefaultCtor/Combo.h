#pragma once
#include "Circle.h"
#include "Square.h"

class Combo
{
public:

	~Combo();
	//内嵌对象必须在被嵌对象的构造函数体执行前构造完成
	//就是在大括号前 s 必须构造完成，如果把s={1.0}放到大括号内，就是赋值了，没有达到要求
	Combo()
		:s{ 1.0 }, c{ 1.0 }	//直接列表初始化
	{
		s = { 8.0 };	//这个是赋值，不是初始化。如果用s{8.0}报错
	}				//尽可能保持同一种初始化方法，用大括号初始化，且用直接列表初始化
public:
	Circle c;
	Square s;
};

#pragma once
#include <iostream>
#include <array>

void selectionSort(double list[], const std::size_t size);
template <int N>
//模板的声明和实现要放到同一个文件里
//注意array传的是一个对象，而不是原生数组那种指针，要对实参进行修改，要使用传引用调用
void selectionSort(std::array<double, N>& list)
{
	constexpr int size = N;
	//for循环，每次从list[i]~list[size - 1]中找出一个最小的数，与list[i]交换
	for (std::size_t i = 0; i < size - 1; i++)
	{
		//初始化将list[i]记为最小值，将i记为最小值的索引
		double min = list[i];
		int index = i;
		//用循环，找出list[i + 1]~list[size - 1]中的最小值和它的下标
		for (std::size_t j = i + 1; j < size; j++)
		{
			if (min > list[j])
			{
				min = list[j];
				index = j;
			}
		}
		//若list[i]不是最小值，那么交换list[i] <--> list[index]
		if (index != i)
		{
			list[index] = list[i];
			list[i] = min;
		}
	}
}

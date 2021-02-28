#pragma once
//将StackOfInteger 泛型化
template <typename T>
class Stack
{
public:
	bool empty();
	T peek();
	T push(T value);
	T pop();
	int getSize();
	Stack();
private:
	T elements[100] = { 0 };
	int size{ 0 };
};

template <typename T>
Stack<T>::Stack()
{
	size = 0;//可不写
	for (auto& i : elements) {
		i = 0;
	}
}

template <typename T>
bool Stack<T>::empty()
{
	return(size == 0 ? true : false);
}

template <typename T>
T Stack<T>::peek()
{
	return elements[size - 1];
}

template <typename T>
T Stack<T>::push(T value)
{
	elements[size] = value;
	size++;
	return value;
}

template <typename T>
T Stack<T>::pop()
{
	auto temp = elements[size - 1];
	elements[size - 1] = 0;
	size--;
	return temp;
}

template <typename T>
int Stack<T>::getSize()
{
	return size;
}

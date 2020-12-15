#pragma once
//»ŒŒÒ1£∫±‡–¥StackOfIntegers
/*
-element: int[100]
-size: int
+StackOfIntegers()
+empty(): bool
+peek(): int
+push(value: int): int
+getSize(): int
*/
class StackOfIntegers
{
public:
	bool empty();
	int peek();
	int push(int value);
	int pop();
	int getSize();
	StackOfIntegers();
private:
	int elements[100] = { 0 };
	int size{ 0 };
};

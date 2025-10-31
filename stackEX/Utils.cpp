#include <iostream>
#include "LinkedList.h"
#include "Utils.h"
#include "Stack.h"

void reverse(int* nums, unsigned int size)
{
	int i = 0;
	Stack* s = new Stack;
	initStack(s);
	for (i = 0; i < size; i++)
	{//pushing all elements onto the stack
		push(s, nums[i]);
	}
	for (i = 0; i < size; i++)
	{//popping all elements from the stack back into the array
		nums[i] = pop(s);
	}
	cleanStack(s);//deleting the stack
	delete s;
}

int* reverse10()
{
	int* arr = new int[10];
	int i = 0;
	for (i = 1; i <= 10; i++)
	{//getting all the numbers of the array
		std::cout << "Enter number " << i << std::endl;
		std::cin >> arr[i - 1];
	}
	reverse(arr, 10);//reversing the array
	return arr;
}
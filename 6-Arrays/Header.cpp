#include <iostream>
#include "Header.h"

void InitializeToTwo(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = 2;
	}
}

// Print an Array of Numbers
void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}

// Sum of Array
int printSum(int sum[], int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total += sum[i];
	}

	return total;
}

// Smallest Value
int printSmallest(int small[], int size)
{
	int smallest = INT_MAX;

	for (int i = 0; i < size; ++i)
		{
			if (small[i] < smallest)
			{
				smallest = small[i];
			}
		}
	
	return smallest;
}

// Largest Value
int printLargest(int large[], int size)
{
	int largest = INT_MIN;

	for (int i = 0; i < size; ++i)
	{
		if (large[i] > largest)
		{
			largest = large[i];
		}
	}
	return largest;

}

// Find a Value
int findIndex(int num[], int size, int value, int start)
{

	for (int i = start; i < size; ++i)
	{
		if (value == num[i])
		{
			return i;
		}
	}

	return -1;
}

// Count Elements
int countElements(int num[], int size, int value, int start)
{

	int counter = 0;

	for (int i = start; i < size; ++i)
	{
		if(num[i] == value)
			{
				counter++;
			}
	}
	return counter;
}

// Reverse
void reverse(int num[], int size)
{
	for (int i = size / 2; i < size; ++i)
	{
		int dstIdx = size - i - 1;

		int temp = num[i];
		num[i] = num[dstIdx];
		num[dstIdx] = temp;
	}
}
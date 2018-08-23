#include <iostream>
#include "Header.h"

int main()
{

	//Create an int array
	int numbers[5]; // = { 0,0,0,0,0 };

	//Access an array via index
	//Iterate over an array
	for (int i = 0; i < 5; ++i)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}

	// Print an Array of Numbers
	int print[]{ 0, 1, 2, 3 };
	printNumbers(print, 4);


	int print2[]{ 2, 4, 8, 16, 32, 64 };
	printNumbers(print2, 6);

	int print3[]{ 33, 74, 52, 9 };
	printNumbers(print3, 4);

	// Sum of Array
	int sum[]{ 0 , 1 , 2 , 3 };
	int sum1 = printSum(sum, 4);

	int sum2[]{ 2 , 4 , 8 , 16 , 32 , 64};
	int sum2a = printSum(sum2, 6);

	int sum3[]{ 33 , 74 , 52 , 9};
	int sum3a = printSum(sum3, 4);

	// Smallest Value
	int testSmallest[]{ 1,23,-4,15 };
	int smallest = printSmallest(testSmallest, 4);


	// Largest Value
	int testLargest[]{ 1,121,32,45,12,-12 };
	int Largest = printLargest(testLargest, 6);

	// Find a Value
	int Index[]{ 4,5,7,8,9 };
	int Indexa = findIndex(Index, 5, 5, 0);

	// Count Elements
	int Elements[]{ 4,4,5,7,7,7,8,9,9,10 };
	int appearences = countElements(Elements, 10, 12, 0);

	// Reverse
	reverse(Index, 5);

	return 0;
}
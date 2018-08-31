#include <iostream>

/*
int initArr(int * arr, int size, int defaultVal)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = defaultVal;
	}
}
*/

// Return Zero Array
/*
int * zeroArray(size_t size)
{
	// creating an array that can hold SIZE number of elements
	int * arr = new int[size];

	// loop through the array and initialize their values to zero
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}

	// return it
	return arr;
}
*/

// Duplicate That Array
/*
int * duplicateArray(int * origArray, size_t size)
{
	int * arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = origArray[i];
	}
	return arr;
}
*/

// I Love Numbers
void iLoveNumbers()
{
	int numHave = -1;
	int num1 = -1;
	int num2 = -1;
	int num3 = -1;

	std::cout << "How many Numbers do you have?" << std::endl;
	std::cin >> numHave;

	int * collection = new int[numHave];


	for (int i = 0; i < numHave; ++i)
	{
		std::cout << "Give me a number!" << std::endl;
		std::cin >> collection[i];
	}
}

// Randomizer Players

// Player Inventory
void numbersNumbers()
{
	int capacity = 2;
	int userInput = -1; 
	int * numbers = new int[capacity];

	int entryCount = 0;

	while (userInput != 0)
	{
		std::cout << "Please give number" << std::endl;
		std::cin >> userInput;

		if (entryCount == capacity)
		{
			int * baby = new int[capacity * 2];

			for (int i = 0; i < capacity; i++)
			{
				baby[i] = numbers[i];

			}
			delete[] numbers;

			numbers = baby;
			capacity *= 2;
		}
		

		numbers[entryCount] = userInput;

		entryCount++;
	}
	for (int i = 0; i < entryCount; i++)
	{
		std::cout << numbers[i] << std::endl;
	}
}

int main()
{
	/*
	// create a single object on the heap
	int * age = new int(0);

	// create an array object on the heap
	int * ages = new int[10];

	// pass a heap instantiated object to a function

	// ALWAYS DELETE (for nooow... -_-)
	delete age;
	delete[] ages;
	*/

	// Return Zero Array
	/*
	int * arr = zeroArray(10);

	delete[] arr;


	*/

	// Duplicate That Array
	/*
	int numbers[] = { 4, 7, 9, 2 };

	int * arr = duplicateArray(numbers, 4);

	delete[] arr;
	*/

	// I Love Numbers
	
	// Player Inventory



	return 0;
}
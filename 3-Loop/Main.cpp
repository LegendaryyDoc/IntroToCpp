#include<iostream>

int main()
{

	//// conditionals 
	//int age = 4;

	//if (age > 5)
	//{
	//	std::cout << "You're too old for kindergarden!" << std::endl;
	//}

	//else if (age < 4)
	//{
	//	std::cout << "Are you potty trained yet?" << std::endl;
	//}

	//else
	//{
	//	std::cout << "What are you doing with your life?" << std::endl;
	//}

	//int userInput = -1;
	//std::cout << "What number should I count to?" << std::endl;
	//std::cin >> userInput;

	//for (int i = 0; i <= userInput; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//// From 1 to 100
	//for (int i = 1; i <= 100; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//// 100 to 1
	//for (int i = 100; i >= 1; i--)
	//{
	//	std::cout << i << std::endl;
	//}

	//// From 1995 to 2017
	//for (int i = 1995; i <= 2017; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	//// Your Three Favorite Numbers
	//int numberA = 0;
	//int numberB = 0;
	//int numberC = 0;
	//int entries = 0;

	//std::cout << "Howdy! What are your favorite numbers?" << std::endl;

	//while (entries < 3)
	//{
	//	if (entries == 0)
	//	{
	//		std::cout << "What's the first number?" << std::endl;
	//		std::cin >> numberA;

	//		if (numberA < 0)
	//		{
	//			std::cout << "Try again" << std::endl;
	//			continue;
	//		}
	//		entries++;
	//	}
	//	std::cout << "Okay, your first number is " << numberA << std::endl;

	//	if (entries == 1)
	//	{
	//		std::cout << "What's your second number?" << std::endl;
	//		std::cin >> numberB;

	//		if (numberB < 0)
	//		{
	//			std::cout << "Try again" << std::endl;
	//			continue;
	//		}
	//		entries++;
	//	}
	//	std::cout << "Okay, your favorites have been " << numberA << ", and " << numberB << std::endl;

	//	if (entries == 2)
	//	{
	//		std::cout << "What's your third number?" << std::endl;
	//		std::cin >> numberC;

	//		if (numberA < 0)
	//		{
	//			std::cout << "Try again" << std::endl;
	//			continue;
	//		}
	//		entries++;
	//	}

	//	std::cout << "Okay, your favorite numbers are " << numberA << "," << numberB << ", and " << numberC << "." << std::endl;
	//}
	//// From X to Y
	//int x = 0;
	//int y = 0;

	//std::cout << "Pick a number between 0-5!" << std::endl;
	//std::cin >> x;

	//std::cout << "Pick another number between 0-5!" << std::endl;
	//std::cin >> y;

	//for (int i = x; i <= y; i++)
	//{
	//	std::cout << i << std::endl;
	//}

	// Largest of Any Number of Numbers
	std::cout << "How many numbers should I ask for?" << std::endl;
	int valueCount = -1;
	std::cin >> valueCount;

	int largest = INT_MIN;

	for (int i = 0; i < valueCount; ++i)
	{
		int input = -1;
		std::cout << "Give me a number!" << std::endl;
		std::cin >> input;

		if (input > largest)
		{
			largest = input;
		}
	}

	std::cout << "Your largest number was " << largest << std::endl;

	// Smallest of Any Number of Numbers
	std::cout << "How many numbers should I ask for?" << std::endl;
	int valueCount = -1;
	std::cin >> valueCount;

	int smallest = INT_MAX;

	for (int i = 0; i < valueCount; ++i)
	{
		int input = -1;
		std::cout << "Give me a number!" << std::endl;
		std::cin >> input;

		if (input > smallest)
		{
			smallest = input;
		}
	}

	std::cout << "Your largest number was " << largest << std::endl;


	// Even or Odd 2: Electric Boogaloo
	int start = 7;
	int end = 12;

	for (int i = start; i < end + 1; ++i)
	{
		int mod = i % 2; 
		if (mod == 0)
		{
			std::cout << "Even" << std::endl;
		}
		else
		{
			std::cout << "Odd" << std::endl;
		}
	}

	// Fizz Buzz

	//Grid Generator

	return 0;
}
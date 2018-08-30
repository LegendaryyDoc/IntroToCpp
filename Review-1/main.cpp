#include <iostream>

int main()
{	/*
	// Multiple Choice Quiz
	int userInput = -1;

	std::cout << "Choose a number between 1 and 3!" << std::endl;
	std::cin >> userInput;

	if (userInput == 1)
	{
		int question1 = 0;

		std::cout << "What is the capital of Washington?" << std::endl;
		std::cout << "1) Bellevue" << std::endl;
		std::cout << "2) Olympia" << std::endl;
		std::cout << "3) Seattle" << std::endl;
		std::cout << "4) Yakima" << std::endl;

		std::cin >> question1;

		if (question1 == 2)
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Wrong!" << std::endl;
		}
	}
	if (userInput == 2)
	{
		int question2 = 0;

		std::cout << "Which of the following nations has the largest population as of 2018?" << std::endl;
		std::cout << "1) North Korea" << std::endl;
		std::cout << "2) Luxembourg" << std::endl;
		std::cout << "3) Denmark" << std::endl;
		std::cout << "4) Syria" << std::endl;

		std::cin >> question2;

		if (question2 == 1)
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Wrong!" << std::endl;
		}
	}
	if (userInput == 3)
	{
		int question3 = 0;

		std::cout << "Which of the following locations does not have an AIE campus?" << std::endl;
		std::cout << "1) Canberra, Australia" << std::endl;
		std::cout << "2) Lafayette, Louisana" << std::endl;
		std::cout << "3) Brisbane, Australia" << std::endl;
		std::cout << "4) Adelaide, Australia" << std::endl;

		std::cin >> question3;

		if (question3 == 3)
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Wrong!" << std::endl;
		}
	}
	

	// Printing Multiples of Five
	for (int i = 1; i <= 20; i++)
	{
		std::cout << i * 5 << std::endl;
	}
	

	// Birthday Cake Candles
	int candles[] = {1, 2, 3, 4, 5};
	int userInput = -1;
	int userInput2 = -1;

	std::cout << "Pick a number between 1 and 5!" << std::endl;
	std::cin >> userInput;
	
	std::cout << "Candle " << userInput << " Blown" << std::endl;
	std::cout << "Pick another number between 1 and 5!" << std::endl;
	std::cin >> userInput2;

	if (userInput <= userInput2)
	{
		std::cout << "Candle " << userInput2 << " Blown!" << std::endl;

		userInput = userInput2;

	}
	else if(userInput > userInput2)
	{
		std::cout << "Candle " << userInput2 << " Lit!" << std::endl;
	}

	std::cout << "Give another number between 1 and 5!" << std::endl;
	std::cin >> userInput2;

	if (userInput <= userInput2)
	{
		std::cout << "Candle " << userInput << " Blown!" << std::endl;

		userInput = userInput2;

	}
	else if (userInput > userInput2)
	{
		std::cout << "Candle " << userInput2 << " Lit!" << std::endl;
	}
	

	// Array Rotations (Fixed array number to 10)
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int temp[10];
	int rotation = 0;

	std::cout << "Enter Rotation Factor" << std::endl;
	std::cin >> rotation;
	std::cout << "\n\n" << std::endl;

	for (int i = 9; i >= 0; i--)
	{	

		if (i + rotation >= 10)
		{
			temp[i + rotation - 10] = arr[i];
		}
		else
		{
			temp[i + rotation] = arr[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << temp[i] << " " << std::endl;
	}
	*/

	// High Score Data
	struct highScoreData
	{
		int highScore; // player's score at end of the game
		int timeToComplete; // recorded in seconds
	};

	int arr[] = { 2, 5, 6, 12, 15, 32, 45, 15 };



	return 0;
}
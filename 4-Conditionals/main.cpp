#include <iostream>

int main()
{

	/*
	bool val1 = 4 == 5; // false
	bool val2 = 1 < 6; // true
	bool val3 = true && true; // true
	bool val4 = false || false || false || false || false || true; // true
	
	if (val1)
	{
		std::cout << "It's the truth!" << std::endl;
	}

	if (0)
	{
		std::cout << "It's true!";
	}
	else
	{
		std::cout << "It's false!";
	}

	// Evaluate the Truth Table
	bool v1 = true and true; // true 
	bool v2 = true or false; // true
	bool v3 = false or true; // true 
	bool v4 = false and true; // false
	bool v5 = true and false; // false 
	bool v6 = false or true or false; // true 
	bool v7 = true and (true or false); // true

	// Evaluate the Following
	// A
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}
	std::cout << "A) " << numberA << std::endl;

	// B
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}
	std::cout << "B) " << numberB << std::endl;

	// Number Judging
	int val1 = 0;

	std::cout << "Choose a number between 1-100" << std::endl;
	std::cin >> val1;

	if (val1 > 50)
	{
		std::cout << "That is a large number!" << std::endl;
	}
	else if (val1 < 50)
	{
		std::cout << "That is a small number!" << std::endl;
	}
	else
	{
		std::cout << "That is a balanced number!" << std::endl;
	}

	// Age Gate
	int age = 0;

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;

	if (age < 18)
	{
		std::cout << "You are a minor!" << std::endl;
	}
	else if (age >= 50)
	{
		if (age < 65)
		{
			std::cout << "You are eligible to join AARP!" << std::endl;
		}
	}
	 else if (age >= 18)
	{
		if (age < 50)
		{
			std::cout << "You are an adult!" << std::endl;
		}	
	}

	else
	{
		std::cout << "You are eligible for retirement benefits!" << std::endl;
	}

	// The Smallest of Three Numbers
	int numb1 = 0;
	int numb2 = 0;
	int numb3 = 0;

	int smallest = INT_MAX;
	int input = -1;

	std::cout << "Choose three positive numbers!" << std::endl;

	std::cout << "Choose your first number!" << std::endl;
	std::cin >> numb1;

	std::cout << "Choose your second number!" << std::endl;
	std::cin >> numb2;

	std::cout << "Choose your third number!" << std::endl;
	std::cin >> numb3;

	std::cout << "The smallest of the numbers is " << smallest << "." << std::endl;

	// Even or Odd
	int userInput = -1;

	std::cout << "Choose a number!" << std::endl;
	std::cin >> userInput;
	std::cout << "Your number is " << userInput << "." << std::endl;

	if (userInput % 2 == 0)
	{
		std::cout << "That number is an even number!" << std::endl;
	}
	else
	{
		std::cout << "That number is an odd number!" << std::endl;
	}

	// Clamp the Number
	int userInput = -1;
	int maxClamp = 30;
	int minClamp = 15;

	std::cout << "Choose a number between 15-30!" << std::endl;
	std::cin >> userInput;

	if (userInput > maxClamp)
	{
		std::cout << "The number you added is above the max range, the number is now " << maxClamp << "." << std::endl;
	}
	else if (userInput < minClamp)
	{
		std::cout << "The number you added is below the min range, the number is now " << minClamp << "." << std::endl;
	}
	else
	{
		std::cout << "The number is " << userInput << std::endl;
	}
	

	// Fun Function Disposable Calculator 
	int numA = 0;
	int numB = 0;
	int addition  = 0;
	int subtraction = 0;
	int division = 0;
	int multiplication = 0;
	int userInput = 0;
	int A = 1;
	int B = 2;
	int C = 3;
	int D = 4;

	addition = A;
	subtraction = B;
	division = C;
	multiplication = D;


	std::cout << "Choose two numbers!" << std::endl;

	std::cout << "Choose your first number!" << std::endl;
	std::cin >> numA;

	std::cout << "Choose your second number!" << std::endl;
	std::cin >> numB;

	std::cout << "Now choose the function you would like to use... type the number next to the function!" << std::endl;
	std::cout << "1) Addition" << std::endl;
	std::cout << "2) Subtraction" << std::endl;
	std::cout << "3) Division" << std::endl;
	std::cout << "4) Multiplication" << std::endl;
	std::cin >> userInput;

	if (userInput == A)
	{
		std::cout << "The answer is " << numA + numB << std::endl;
	}
	else if (userInput == B)
	{
		std::cout << "The answer is " << numA - numB << std::endl;
	}
	else if (userInput == C)
	{
		std::cout << "The answer is " << numA / numB << std::endl;
	}
	else if (userInput == D)
	{
		std::cout << "The answer is " << numA * numB << std::endl;
	}
	else
	{
		std::cout << "Try again!" << std::endl;
	}
	*/

	// A Battle of Prehistoric Proportions 

	int userPoints = 0;
	int dinoPoints = 0;
	
	//strength
	int userStrengths = -1;
	int dinoStrength = 4;
	std::cout << "Rate your strength on a scale of 1 to 10" << std::endl;
	std::cin >> userStrengths;

	if (userStrengths > dinoStrength) { userPoints++; }
	else if (dinoStrength > userStrengths) { dinoPoints++; }

	// rps
	char userChoice = 0;
	std::cout << "Rock, Paper, or Scissors? (r, p, or s)" << std::endl;
	std::cin >> userChoice;

	if (userChoice == 'r') { dinoPoints++; }
	else if (userChoice == 's') { userPoints++; }

	//battle count
	int userBattles = -1;
	int dinoBattles = 2;
	std::cout << "Battle count?" << std::endl;
	std::cin >> userBattles;

	if (userBattles > dinoBattles) { userPoints++; }
	else if (dinoBattles > userBattles) { dinoPoints++; }

	//sleep
	int userSleep = 0;
	std::cout << "Sleep?" << std::endl;
	std::cin >> userSleep;

	if (userSleep >= 8) { dinoPoints++; }
	else if (userSleep <= 8) { userPoints++; }

	// vitamin C
	int userVitamin = -1;
	std::cout << "How much vitamin C do you get each day?" << std::endl;
	std::cin >> userVitamin;

	if (userVitamin >= 75) { userPoints++; }
	else if (userVitamin <= 75) { dinoPoints++; }

	return 0;
}
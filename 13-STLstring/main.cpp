#include<iostream>
#include<string>
#include<ctime>

using namespace std;

// Hangman
int NUM_TRY = 3;

int main()
{
	// Every Other
	/*
	std::string every_Other;
	

	std::cout << "Type in some random letters!" << std::endl;
	std::getline(std::cin, every_Other, '\n');

	int length = every_Other.length();

	std::cout << "Your letters are: " << every_Other << std::endl;

	for (int i = 0; i < every_Other.length(); i+=2)
	{
		std::cout << every_Other[i] << std::endl;
	}
	*/

	// Bestowing a Title
	/*
	std::string name_String;
	std::string title_String;

	srand(time(NULL));

	std::string titles[3] =
	{
		"The Little One",

		"The Destroyer",

		"Who?",
	};

	std::cout << "What is your name?" << std::endl;
	std::getline(std::cin, name_String, '\n');

	title_String = titles[rand() % 3];

	std::cout << name_String << ", " << title_String << std::endl;
	*/
	
	// Character Frequency
	/*
	std::string frequency;
	char checkCharacter;
	int count = 0;

	std::cout << "Type in some letters or words!" << std::endl;
	std::getline(std::cin, frequency, '\n');
	std::cout << "\n" << std::endl;

	int length = frequency.length();

	std::cout << "What character would you like to check for?" << std::endl;

	std::cin >> checkCharacter;
	std::cout << "\n" << std::endl;

	for (int i = 0; i < frequency.length(); i++)
	{
		if (frequency[i] == checkCharacter)
		{
			++count;
		}
	}

	std::cout << "Number of " << checkCharacter << " = " << count << std::endl;
	*/

	// Instance Counting
	/*
	int count = 0;

	std::string main_String = "abababababab";
	char sub;

	std::cout << "Check for instances in " << main_String << std::endl;

	int length = main_String.length();

	std::cout << "What instances would you like to check for?" << std::endl;
	std::cin >> sub;

	for (int i = 0; i < length; i++)
	{
		if (main_String[i] == sub)
		{
			++count;
		}
	}
	
	std::cout << "Number of instances " << sub << " = " << count << std::endl;
	*/


	/*----------------------*/
	/*----------------------*/


	// Hangman
	
	std::string secret_Word;
	char letter;

	srand(time(NULL));
	
	std::string words[] =
	{

		"awkward",

		"bagpipes",

		"banjo",

		"bungler",

		"croquet",

		"crypt",

		"dwarves",

		"fervid",

		"fishhook",

		"fjord",

		"gazebo",

		"gypsy",

		"haiku",

		"haphazard",

		"hyphen",

		"ivory",

		"jazzy",

		"jiffy",

		"jinx",

		"jukebox",

		"kayak",

		"kiosk",

		"klutz",

		"memento",

		"mystify",

		"numbskull",

		"ostracize",

		"oxygen",

		"pajama",

		"phlegm",

		"pixel",

		"polka",

		"quad",

		"quip",

		"rhythmic",

		"rogue",

		"sphinx",

		"squawk",

		"swivel",

		"toady",

		"twelfth",

		"unzip",

		"waxy",

		"yacht",

		"zealous",
		
		"zigzag",

		"zippy",

		"zombie",
	};

	secret_Word = words[rand() % 48];

	std::string hide_Word(secret_Word.length(), 'X');

	while (NUM_TRY != 0)
	{
		std::cout << "\t\t\t\t|-------------|" << std::endl;
		std::cout << "\t\t\t\t Tries left: " << NUM_TRY << std::endl;
		std::cout << "\t\t\t\t|-------------|" << std::endl;
		std::cout << "\t\t\t\t---------------" << std::endl;
		std::cout << "\n\t\t\t\t    " << hide_Word << std::endl;
		std::cout << "\n\t\t\t\t---------------" << std::endl;
		std::cout << "\n\t\t\t\tGuess a letter: ";
		std::cin >> letter;
		std::cout << "\n" << std::endl;

		bool foundSuccess = false;

		for (int i = 0; i < secret_Word.length(); i++)
		{
			if (secret_Word[i] == letter)
			{
				hide_Word[i] = letter;
				foundSuccess = true;
				if(hide_Word == secret_Word)
				{
					std::cout << "\t\t\tCongrats you guessed the word " << secret_Word << "\n\n" << std::endl;
					system("pause");
					return 0;
				}
			}
#pragma region Old Code

			//else if (secret_Word[i] != letter && !foundSuccess)
			//{
			//	std::cout << "\t\t\tThat is not one of the letters.\n" << std::endl;
			//	std::cout << "\t\t   |---------------------------------------|\n" << std::endl;

			//	--NUM_TRY;

			//	if (NUM_TRY == 0)
			//	{
			//		std::cout << "\t\t   You are out of tries! The word was " << secret_Word << "\n\n" << std::endl;

			//		system("pause");
			//		return 0;
			//	}
			//}

#pragma endregion

		}

		if (!foundSuccess) {
			std::cout << "\t\t\tThat is not one of the letters.\n" << std::endl;
			std::cout << "\t\t   |---------------------------------------|\n" << std::endl;
			--NUM_TRY;
			if (NUM_TRY == 0)
			{
				std::cout << "\t\t   You are out of tries! The word was " << secret_Word << "\n\n" << std::endl;

				system("pause");
				return 0;
			}
		}

	}
	
	return -1;
}
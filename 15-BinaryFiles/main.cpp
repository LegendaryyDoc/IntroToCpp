#include <iostream>
#include <fstream>
#include <string>
#include "bFiles.h"

using namespace std;


/*--------------------------------------------------*/

bool write(std::string filePath, std::string message)
{
	std::fstream file;

	file.open(filePath.c_str(), std::ios::out | std::ios::binary);

	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return false;
	}
		file.clear();

		file.seekp(0, std::ios_base::end);

		file << message;

		file.flush();
		file.close();

		return true;
}

/*--------------------------------------------------*/

std::string read(std::string filePath)
{
	std::fstream file;

	file.open(filePath.c_str(), std::ios::in | std::ios::binary);

	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
		return "";
	}

	std::string buffer;
	while (std::getline(file, buffer)) 				 
	{												 
													 
	}												 
													 
	file.clear();									 
	file.close();									 
													 
	return buffer;									 
}													 
													 
/*--------------------------------------------------*/

int main()
{
	// Hello World
	/*
	std::string userInput = {};

	std::cout << "Create a file path for the file! (add .bin to the end of it)" << std::endl;
	std::cin >> userInput;

	write(userInput, "Hello World");
	std::cout << read(userInput);
	*/

	// Save Data
	/*
	saveData dug = { "Dug", 0, 1, true, 2369 };
	saveData hug = { "Hug", 3, 100, false, 9565 };
	saveData pug = { "Pug", 12, 9999, false, 1200 };

	saveData myArr[] = { dug, pug, hug };

	saveDataToList("DataSave.bin", myArr, 3);
	readSaveData("DataSave.bin");

	return 0;
	*/

	//Monster Creature Quest
	system("color 2");
	std::cout << "  .----------------.  .----------------.  .----------------.  " << std::endl;
	std::cout << " | .--------------. || .--------------. || .--------------. | " << std::endl;
	std::cout << " | | ____    ____ | || |     ______   | || |    ___       | | " << std::endl;
	std::cout << " | ||_   \\  /   _|| || |   .' ___  |  | || |  .'   '.     | | " << std::endl;
	std::cout << " | |  |   \\/   |  | || |  / .'   \\_|  | || | /  .-.  \\    | | " << std::endl;
	std::cout << " | |  | |\\  /| |  | || |  | |         | || | | |   | |    | | " << std::endl;
	std::cout << " | | _| |_\\/_| |_ | || |  \\ `.___.'\\  | || | \\  `-'  \\_   | | " << std::endl;
	std::cout << " | ||_____||_____|| || |   `._____.'  | || |  `.___.\\__|  | | " << std::endl;
	std::cout << " | |              | || |              | || |              | | " << std::endl;
	std::cout << " | '--------------' || '--------------' || '--------------' | " << std::endl;
	std::cout << "  '----------------'  '----------------'  '----------------'  " << std::endl;
	std::cout << "Welcome to Monster Creature Quest." << std::endl;
	return 0;
}
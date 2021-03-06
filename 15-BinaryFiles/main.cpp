﻿#include <iostream>
#include <fstream>
#include <string>
#include "bFiles.h"
#include "monster.h"

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
int GREEN = 0x02;

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
	std::string userFilePath;
	std::string userTextInsert;
	int userInput = -1;
	/*char userTextInsert[500] = " ";*/
	char monsterName[50] = " ";

	

	bool exit = false;


	outputColor("              Welcome to Monster Creature Quest\n", GREEN);
	outputColor("  .----------------.  .----------------.  .----------------.  ", GREEN);
	outputColor(" | .--------------. || .--------------. || .--------------. | ", GREEN);
	outputColor(" | | ____    ____ | || |     ______   | || |    ___       | | ", GREEN);
	outputColor(" | ||_   \\  /   _|| || |   .' ___  |  | || |  .'   '.     | | ", GREEN);
	outputColor(" | |  |   \\/   |  | || |  / .'   \\_|  | || | /  .-.  \\    | | ", GREEN);
	outputColor(" | |  | |\\  /| |  | || |  | |         | || | | |   | |    | | ", GREEN);
	outputColor(" | | _| |_\\/_| |_ | || |  \\ `.___.'\\  | || | \\  `-'  \\_   | | ", GREEN);
	outputColor(" | ||_____||_____|| || |   `._____.'  | || |  `.___.\\__|  | | ", GREEN);
	outputColor(" | |              | || |              | || |              | | ", GREEN);
	outputColor(" | '--------------' || '--------------' || '--------------' | ", GREEN);
	outputColor("  '----------------'  '----------------'  '----------------'  ", GREEN);
	
	while (!exit)
	{
		std::cout << "What would you like to do?\n" << std::endl;
		std::cout << "1) Add a monster by ID" << std::endl;
		std::cout << "2) Remove a monster by ID" << std::endl;
		std::cout << "3) View a monster by ID" << std::endl;
		std::cout << "4) Browse monsters" << std::endl;
		std::cout << "5) Exit" << std::endl;
		std::cin >> userInput;

		if (userInput == 1)
		{
			std::string monsterID;

			std::cout << "What would you like the ID to be?(1-100)" << std::endl;
			std::cin >> monsterID;

			std::cout << "What would you like to name the monster?" << std::endl;
			std::cin >> monsterName;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout << "Write a description for the monster!" << std::endl;
			std::getline(std::cin, userTextInsert, '\n');


			monster myMonster = { monsterName, userTextInsert };

			myMonster.saveMonster(monsterID);
		}
		if (userInput == 2)
		{
			std::cout << "What file would you like to remove?" << std::endl;
			std::cin >> userFilePath;

			monster::removeMonster(userFilePath);
		}
		if (userInput == 3)
		{
			std::cout << "What monster would you like to view?" << std::endl;
			std::cin >> monsterName;

			monster::viewMonster(monsterName);
		}
		if (userInput == 4)
		{
			monster::listFile();
		}
		if (userInput == 5)
		{
			exit = true;
		}
		exit = false;
	}
	
	return 0;
}
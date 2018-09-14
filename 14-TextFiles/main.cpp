#include <iostream>
#include<fstream>
#include <string>

using namespace std;

struct entity
{
	// use std::string or cstrings to represent the name; it's up to you!

	std::string name;

	float hp;
	float armor;

	int strength;
	int defense;
	int agility;
	int luck;
};

entity * loadEntitities(const char * resPath)
{
	fstream file;
	file.open(resPath, std::ios::in);

	if (!file.is_open()) { return NULL; }

	entity * ents = new entity[1];
	size_t capacity = 1;
	size_t size = 0;

	std::string line;
	while (std::getline(file, line))
	{
		if (line.length() == 0 || line[0] != '@')
		{
			continue;
		}
		entity temp;
		temp.name = line;

		std::getline(file, line);
		temp.hp = std::stof(line);

		std::getline(file, line);
		temp.armor = std::stof(line);

		std::getline(file, line);
		temp.strength = std::stoi(line);

		std::getline(file, line);
		temp.defense = std::stoi(line);

		std::getline(file, line);
		temp.agility = std::stoi(line);

		std::getline(file, line);
		temp.luck = std::stoi(line);

		if (size < capacity)
		{
			ents[size] = temp;
			size++;
		}
		else
		{
			entity * newEnts = new entity[capacity + 1];

			memcpy(newEnts, ents, sizeof(entity)*capacity);
			delete[]ents;
			ents = newEnts;
		}
	}

	return ents;
}

int main()
{
	/*
	std::fstream file;

	file.open("paul.text", std::ios::out);

	if (!file.is_open())
	{
		std::cout << "Failed to open file." << std::endl;
		return -1;
	}

	file << "Hello Paul!";
	file.close();
	*/


	// Digital Printer
	/*
	std::string printerInput = {};

	std::fstream printer;
	std::string buffer;
	std::string userInput = {};

	std::cout << "What would you like to read? (famousLines.txt or commonAnimeTropes.txt) " << std::endl;
	std::getline(std::cin, printerInput, '\n');

	printer.open(printerInput, std::ios::in);

	if (!printer.is_open())
	{
		std::cout << "Failed to open file." << std::endl;
		return -1;
	}
	while (std::getline(printer, buffer))
	{
		std::cout << buffer << std::endl;
	}

	system("pause");
	printer.close();
	*/

	// My Information
	/*
	std::fstream myInfo;

	myInfo.open("Information.txt", std::ios::out);

	if (!myInfo.is_open())
	{
		std::cout << "Failed to open file." << std::endl;
		return -1;
	}

	std::string name = {};

	std::cout << "Who are you?" << std::endl;
	std::getline(std::cin, name, '\n');

	myInfo << "Name: " << name << "\n";

	int age;

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;
	
	myInfo << "Age: " << age << "\n";

	std::string favColor = {};
	
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "What is your favorite color?" << std::endl;
	std::getline(std::cin, favColor);

	myInfo << "Favorite color: " << favColor << "\n";

	myInfo.flush();
	system("pause");
	myInfo.close();
	*/

	// Text Corruption
	/*
	std::fstream textCorruption;
	std::string buffer;

	textCorruption.open("textCorruption.txt", std::ios::in);

	while (std::getline(textCorruption, buffer))
	{
		for (int i = 0; i < buffer.length(); i += 7)
		{
			buffer[i] = '█';
		}
		std::cout << buffer << std::endl;
	}
	textCorruption.close();
	*/

	// Load Entity Data
	std::string input;

}
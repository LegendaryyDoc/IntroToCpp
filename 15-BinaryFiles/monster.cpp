#include <iostream>
#include <fstream>
#include "monster.h"



monster::monster()
{
}


monster::~monster()
{
}

monster::monster(std::string monsterName, std::string text)
{
	name = monsterName;
	descriptor = text;
}

bool monster::saveMonster(std::string filePath)
{
	std::ofstream fout;

	fout.open(filePath + ".bin", std::ios::out | std::ios::binary);

	if (fout.fail())
	{
		std::cout << "File not found." << std::endl;
		return 0;
	}

	// write the name
	int nameLen = name.length();

	fout.write((char*)&nameLen, sizeof(nameLen));
	fout.write(name.c_str(), nameLen);

	int descriptorLen = descriptor.length();
	fout.write((char*)&descriptorLen, sizeof(descriptorLen));
	fout.write(descriptor.c_str(), descriptorLen);
	
	fout.flush();
	fout.close();

	return false;
}

bool monster::removeMonster(std::string filePath)
{
	std::string fileToDelete;
	std::ifstream fin(filePath + ".bin");

	if (fin)
	{
		fin.close();

		fileToDelete = filePath + ".bin";
		if (std::remove(fileToDelete.c_str()) == 0)
		{
			std::cout << "\nFile deleted!\n" << std::endl;
		}
		else
		{
			std::cout << "\nFailed to delete.\n" << std::endl;
		}

		return true;
	}
	else
	{
		std::cout << "\nThat file does not exist!\n" << std::endl;
		return false;
	}
	
}

bool monster::viewMonster(std::string filePath)
{
	monster myMonster;
	std::ifstream print;

	print.open(filePath + ".bin", std::ios::in | std::ios::binary);
	if (print.fail())
	{
		std::cout << "File not found!\n" << std::endl;
		return false;
	}

	int length = 0;								// make a var to store length
	print.read((char*)&length, sizeof(length)); // read out the length from file
	char * name = new char[length + 1];			// make a buffer to store the characters
	name[length] = '\0';						// set the last character to NULL-term
	print.read(name, length);					// read the data into the buffer

	std::cout << "Name:" << name << "\n";

	delete[] name;

	print.close();
	return true;
}


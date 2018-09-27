#include <iostream>
#include <fstream>
#include <string>
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

	std::string tmp = "Monsters\\" + filePath + ".bin";

	fout.open(tmp, std::ios::out | std::ios::binary);

	if (fout.fail())
	{
		std::cout << "File failed to create.\n" << std::endl;
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
	std::ifstream fin("Monsters/" + filePath + ".bin");

	if (fin)
	{
		fin.close();

		fileToDelete = "Monsters/" + filePath + ".bin";
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

	print.open("Monsters/" + filePath + ".bin", std::ios::in | std::ios::binary);
	if (print.fail())
	{
		std::cout << "File not found!\n" << std::endl;
		return false;
	}

	int nameLength = 0;								// make a var to store length
	print.read((char*)&nameLength, sizeof(nameLength)); // read out the length from file
	char * name = new char[nameLength + 1];			// make a buffer to store the characters
	name[nameLength] = '\0';						// set the last character to NULL-term
	print.read(name, nameLength);					// read the data into the buffer

	std::cout << "\nName: " << name << "\n";

	delete[] name;

	int descriptorLength = 0;

	print.read((char*)&descriptorLength, sizeof(descriptorLength));
	char * descriptor = new char[descriptorLength + 1];
	descriptor[descriptorLength] = '\0';
	print.read(descriptor, descriptorLength);

	std::cout << "Description: " << descriptor << "\n\n";

	delete[] descriptor;

	print.close();
	return true;
}

void monster::listFile()
{
	std::string fileName;
	std::ifstream fin;

	for (int i = 0; i <= 100; i++)
	{
		// open files that match the name
		fileName = ("Monsters/" + std::to_string(i)) + ".bin";

		fin.open(fileName);

		// print files that are open
		if (fin)
		{
			fin.close();

			std::cout << "Monster ID: " << i << std::endl;
		}

		// if files not open then they do not exist so continue to next one
		else
		{
			fin.clear();
			continue;
		}
	}
}

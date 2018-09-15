#include <iostream>
#include <fstream>
#include <string>
#include "bFiles.h"

using namespace std;

// Save Data
/*
bool saveDataToList(string filePath, saveData saveDataArray[], int arrSize)
{
	std::ofstream fout;

	fout.open(filePath.c_str(), std::ios::out | std::ios::binary);


	if (fout.fail())
	{
		std::cerr << "File not found." << std::endl;
		return 0;
	}

	for (int i = 0; i < arrSize; i++)
	{
		fout.write((char*)&saveDataArray[i], sizeof(saveData));
	}

	fout.flush();
	fout.close();

	return true;
}

bool readSaveData(string filePath)
{
	saveData mySaveData;

	std::ifstream fin(filePath.c_str(), std::ios::in | std::ios::binary);

	if (fin.fail())
	{
		std::cerr << "File not found." << std::endl;
		return 0;
	}

	while (!fin.eof() && fin.peek() != EOF)
	{
		fin.read((char*)&mySaveData, sizeof(saveData));
		std::cout << "Name: " << mySaveData.playerName << std::endl;
		std::cout << "Death Count: " << mySaveData.deathCount << std::endl;
		std::cout << "Deepest Floor: " << mySaveData.deepestFloor << std::endl;
		if (mySaveData.hasBeenBeatenGame == true)
		{
			std::cout << "Has beaten the game!" << std::endl;
		}
		else if (mySaveData.hasBeenBeatenGame == false)
		{
			std::cout << "Has not beaten the game!" << std::endl;
		}
		std::cout << "Time Played: " << mySaveData.timePlayed << std::endl;
	}
		
	fin.close();

	return true;
}
*/

// Monster Creature Quest

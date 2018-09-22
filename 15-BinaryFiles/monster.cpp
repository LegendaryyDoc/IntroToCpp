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

	fout.write((char*)&(*this), sizeof(monster));
	
	fout.flush();
	fout.close();

	return false;
}

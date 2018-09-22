#pragma once
#include<iostream>

class monster
{
public:
	monster();
	~monster();

	monster(std::string monsterName, std::string text);


	std::string name;
	std::string descriptor;

	bool saveMonster(std::string filePath);
	char monsterName[100] = "";
	char flavorText[600] = "";
};




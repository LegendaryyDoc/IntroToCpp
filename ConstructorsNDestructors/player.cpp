#include "player.h"
#include <iostream>

player::player()
{
	std::cout << "Player spawned!" << std::endl;
	
	name = "";
	score = 0;
}

player::player(const std::string &n, int scor)
{
	name = n;
	score = scor;
}

player::~player()
{
	std::cout << "Player destructed!" << std::endl;
}
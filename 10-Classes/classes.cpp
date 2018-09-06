#include<iostream>
#include "classes.h"

/*
void person::greet()
{
	std::cout << "Hello!" << std::endl;
}

int person::getAge()
{
return age;
}

int person::getCake()
{
return poundCake;
}

void person::useCakes(int qty)
{
poundCake -= qty;
}

void person::eatMeal()
{
	if (poundCake > 0)
	{
		poundCake--;
	}

	if (this->health < 100)
	{
		this->health++;
	}
	else
	{
		this->health--;
	}
}
*/


// Television
/*
void television::increaseVolume()
{
	int numberIncreased = 0;
	int newVolume = 0;

	std::cout << "How many times would you like to increase the volume?" << std::endl;

	std::cin >> numberIncreased;

	std::cout << "The volume is now set to " << currentVolume + numberIncreased << std::endl;
	newVolume = currentVolume + numberIncreased;
	currentVolume = newVolume;

	if (currentVolume > 100)
	{
		currentVolume = 100;
	}
}

void television::decreaseVolume()
{
	int numberDecreased = 0;
	int newVolume = 0;

	std::cout << "How many times would you like to decrease the volume?" << std::endl;

	std::cin >> numberDecreased;

	std::cout << "The volume is now set to " << currentVolume - numberDecreased << std::endl;
	newVolume = currentVolume - numberDecreased;
	currentVolume = newVolume;

	if (currentVolume < 0)
	{
		currentVolume = 0;
	}
}

int television::volume()
{
	return currentVolume;
}

void television::increaseChannel()
{
	int channelsIncreased = 0;
	int newChannel = 0;

	std::cout << "How many times would you like to increase the channel?" << std::endl;

	std::cin >> channelsIncreased;

	std::cout << "The channel is now set to " << currentChannel + channelsIncreased << std::endl;
	newChannel = currentChannel + channelsIncreased;
	currentChannel = newChannel;

	if (currentChannel > 1000)
	{
		currentChannel = 1000;
	}
}

void television::decreaseChannel()
{
	int channelsDecreased = 0;
	int newChannel = 0;

	std::cout << "How many times would you like to decreased the channel?" << std::endl;

	std::cin >> channelsDecreased;

	std::cout << "The channel is now set to " << currentChannel - channelsDecreased << std::endl;
	newChannel = currentChannel - channelsDecreased;
	currentChannel = newChannel;

	if (currentChannel < 1)
	{
		currentChannel = 1;
	}
}

int television::channel()
{
	return currentChannel;
}
*/


// Digital Piggy Bank
/*
float DigitalPiggyBank::deposit()
{
	float moneyDeposit = 0.0f;
	float newBalance = 0.0f;

	std::cout << "How much money would you like to deposit?" << std::endl;
	std::cin >> moneyDeposit;

	std::cout << "You are depositing " << moneyDeposit << std::endl;
	
	newBalance = currentBalance + moneyDeposit;
	currentBalance = newBalance;

	return moneyDeposit;
}

float DigitalPiggyBank::withdraw()
{
	float moneyWithdraw = 0;
	float newBalance = 0;

	std::cout << "How much money would you like to withdraw?" << std::endl;
	std::cin >> moneyWithdraw;

	std::cout << "You are taking out $" << moneyWithdraw << std::endl;

	newBalance = currentBalance - moneyWithdraw;
	currentBalance = newBalance;

	return moneyWithdraw;
}

float DigitalPiggyBank::balance()
{
	return currentBalance;
}
*/


// ServerBrowserServers
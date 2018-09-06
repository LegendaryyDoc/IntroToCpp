#pragma once

class person
{
	/*
private:

	int age = 25;
	int poundCake = 10;
	

public:

	void greet();
	void eatMeal();
	void useCakes(int qty);
	int health = 100;

	int getAge();
	int getCake();
	*/
};


// Television
class television
{
	/*
private:

	int currentChannel = 32;
	int currentVolume = 12;

public:

	void increaseVolume(); // increases the volume by one
	void decreaseVolume(); // decreases the volume by one

	int volume(); // returns the current volume

	void increaseChannel(); // increases the channel num by one
	void decreaseChannel(); // decreases the channel num by one

	int channel(); // returns the current channel
	*/
};


// Digital Piggy Bank
class DigitalPiggyBank
{
	/*
private:
	
	float currentBalance = 23.24f; // Maintains the current balance of the piggy bank.

public:
	
	float deposit(); // Add funds to the value of the current balance.

	
	float withdraw(); // Returns and clears the total current balance.

	
	float balance(); // Returns the current balance of the function.
	*/
};


// ServerBrowserService
class ServerBrowserService
{
	/*
private:
	// An array of all servers registered with the system.
	ServerInfo servers[50]; // note: this is hard-coded for 50 servers

							// A count of all servers currently registered.
	int serverCount;
public:
	// Registers a server with the service
	bool registerServer(ServerInfo newServer);

	// Copies server entries into the given array.
	// Returns the total number of servers provided to the array.
	int getServers(ServerInfo * dstArray, size_t dstSize);
	*/
}; // Need to finish this
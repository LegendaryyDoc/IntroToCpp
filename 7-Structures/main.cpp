#include <iostream>
#include "person.h"




int main()
{
	// Create a variable w/ it
	person paul = {};
	person jon = { 15, 1000, 20 };

	printPerson(jon);

	// Defining piggyBank
	bank one = { 21, 15, 23, 125, 302, 504, 3214 };

	printBank(one);

	bank cash = { 21, 15, 23, 125, 302, 504, 3214 };
	
	float notes = calcPiggybankNotes(cash);
	float coins = calcPiggybankCoins(cash);
	float total = calcPiggybankTotal(cash);
	
	// Student
	// Print Students
	student roster[] =
	{
	 { 12006, 1, 45 },
	 { 12007, 2, 29 },
	 { 12008, 2, 32 },
	 { 12009, 1, 40 },
	 { 12010, 2, 47 },
	 { 12011, 2, 28 }
	};

	float averageScore = avgScore(roster, 6);

	float median = medianScore(roster, 6);

	float course = getEnrolledStudentCount(roster, 6);

	return 0;
}
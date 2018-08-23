#include <iostream>
#include "person.h"

// Passing Structs
void printPerson(person target)
{
	std::cout << "Age: " << target.age << std::endl;
	std::cout << "Cash: " << target.cash << std::endl;
	std::cout << "Points: " << target.points << std::endl;
}

// Defining piggyBank
void printBank(bank target)
{
	std::cout << "One Dollar Bills: " << target.oneDollar << std::endl;
	std::cout << "Two Dollar Bills: " << target.twoDollar << std::endl;
	std::cout << "Five Dollar Bills: " << target.fiveDollar << std::endl;
	std::cout << "Quarters: " << target.quarters << std::endl;
	std::cout << "Dimes: " << target.dimes << std::endl;
	std::cout << "Nickels: " << target.nickels << std::endl;
	std::cout << "Pennies: " << target.pennies << std::endl;
}

float calcPiggybankNotes(bank piggy)
{
	return piggy.oneDollar +
		piggy.twoDollar * 2 +
		piggy.fiveDollar * 5;
}

float calcPiggybankCoins(bank piggy)
{
	return piggy.quarters * 0.25f +
		piggy.dimes * .010f +
		piggy.nickels * .05f +
		piggy.pennies * 0.1f;
}

float calcPiggybankTotal(bank piggy)
{
	return calcPiggybankNotes(piggy) +
		calcPiggybankCoins(piggy);
}

// Student
// Print Students
void studentInformation(student info)
{
	std::cout << "Student ID number: " << info.studentID << std::endl;
	std::cout << "Number of couses taking: " << info.courses << std::endl;
	std::cout << "Score on last exam: " << info.examScore << std::endl;
}

// Student Analytics
float avgScore(student gradebook[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += gradebook[i].examScore;
	}
	return sum / (float)size;
}

float medianScore(student gradebook[], int size)
{
	// sort the data
	bool swapped = false;

	do
	{
		swapped = false;

		for (int i = 0; i < size - 1; ++i)
		{
			//compare the two values
			if (gradebook[i].examScore > gradebook[i + 1].examScore)
			{
				student temp = gradebook[i];
				gradebook[i] = gradebook[i + 1];
				gradebook[i + 1] = temp;

				swapped = true;
			}
		}
	} while (swapped == true);

	// return the median
	if ((size % 2) == 0)
	{
		int sum = gradebook[size / 2].examScore + gradebook[size / 2 - 1].examScore;
		return sum / 2.0f;
	}
	else
	{
		return gradebook[size / 2].examScore;
	}
}

int getEnrolledStudentCount(student gradebook[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += gradebook[i].courses;
	}
	return sum / (float)size;
}
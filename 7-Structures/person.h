#pragma once

// Declaring a Struct
struct person
{
	// Age of the person given in years
	int age;
	// The pocket of the person given in GBP
	float cash;

	// The amount of rewards points at their local deli
	int points;
};

void printPerson(person target);


// Defining piggyBank
struct bank
{
	int oneDollar;
	int twoDollar;
	int fiveDollar;
	int quarters;
	int dimes;
	int nickels;
	int pennies;

	int bills = oneDollar + twoDollar + fiveDollar;
};

void printBank(bank target);

float calcPiggybankNotes(bank piggy);
float calcPiggybankCoins(bank piggy);
float calcPiggybankTotal(bank piggy);

// Student
// Print Student 
struct student
{
	int studentID;
	int courses;
	int examScore;
};

void studentInformation(student info);

// Student Analytics
float avgScore(student gradebook[], int size);
float medianScore(student gradebook[], int size);
int getEnrolledStudentCount(student gradebook[], int size);
#include <iostream>
#include "mathutils.h"



int main()
{
	int val = sum(5, 2);
	float fval = sum(5.5f, 2.1f);

	// Function Prototypes
	// A
	

	// B
	float rootVal = square(12);

	// C
	float decVal = decimal(10, 3); // not working

	// D
	

	// Function Definitions
	int cval = comma(5, 10); // not working
	std::cout << cval << std::endl;

	// Sum of Three Integers
	int valThree = sumThree(7, 5, 3);

	return 0;
}

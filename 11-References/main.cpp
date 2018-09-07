#include<iostream>
/*
struct myStruct
{
	int a = 2;
	int b = 1;
	int c = 0;
};
void refSum(int a, int b, int& c);
void refSumStruct(myStruct& myStruct);
*/

// Syntax for References
/*
void numRef(int& num);
*/

// Product of Two Floats
/*
void product(float a, float b, float &product);
*/

// Aussiegochi
struct Aussiegochi
{
	float happiness;
	float hunger;
	float thirst;
	float sanity;
};

void feedAussie(Aussiegochi& aus);
void waterAussie(Aussiegochi& aus);
void abuseAussie(Aussiegochi& aus);
void coddleAussie(Aussiegochi& aus);

int main()
{
	/*
	int myVal = 0;
	int& myRef = myVal;

	std::cout << "myVal = " << myVal << std::endl;
	std::cout << "myReg = " << myRef << std::endl;

	myVal = 2;

	std::cout << "myVal = " << myVal << std::endl;
	std::cout << "myReg = " << myRef << std::endl;

	myRef = 3;

	std::cout << "myVal = " << myVal << std::endl;
	std::cout << "myReg = " << myRef << std::endl;

	

	int myC = 0;
	refSum(1, 2, myC);
	std::cout << "\nmyC = " << myC << std::endl;

	

	myStruct origStruct;
	refSumStruct(origStruct);
	std::cout << "\nmyC = " << origStruct.c << std::endl;
	*/

	// Syntax for References
	/*
	int num = 3;
	float dec = 0.6f;
	bool tf = false;
	char letter = 'a';

	std::cout << "num = " << num << std::endl;

	int& numRef = num;  

	std::cout << "numRef = " << numRef << std::endl;

	float& numRef = dec;

	std::cout << "numRef = " << numRef << std::endl;

	bool& numRef = tf;

	std::cout << "numRef = " << numRef << std::endl;

	char& numRef = letter;

	std::cout << "numRef = " << numRef << std::endl;
	*/

	// Product of Two Floats
	/*
	float floatC = 0.0f;
	product(3.0f, 4.0f, floatC);
	std::cout << "floatC = " << floatC << std::endl;
	*/

	// Aussiegochi

	return -1;
}

// Syntax for References
/*
void numRef(int& num)
{

}
*/

// Product of Two Floats
/*
void product(float a, float b, float& c)
{
	c = a * b;
}
*/

// Aussiegochi
void feedAussie(Aussiegochi& aus)
{
	aus.hunger += 10;
	aus.happiness += 2;
}

void waterAussie(Aussiegochi& aus)
{
	aus.thirst += 5;
	aus.happiness += 1;
}

void abuseAussie(Aussiegochi& aus)
{
	aus.happiness -= 10;
}

void coddleAussie(Aussiegochi& aus)
{

}

/*
void refSum(int a, int b, int& c)
{
	c = a + b;
}

void refSumStruct(myStruct& myStruct)
{
	myStruct.c = myStruct.a + myStruct.b;
}
*/
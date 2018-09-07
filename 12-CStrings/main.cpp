#include<iostream>
#include<string>

// Remove Whitespace
/*
char *removeSpaces(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	return str;
}
*/

int main()
{
	// Greeting
	/*
	char input1[8] = "Terry";
	char input2[25] = "Hello ";

	strcat_s(input2, input1);

	std::cout << input2 << std::endl;
	*/

	// Favorite Color
	/*
	char userInput[50] = {};

	char red[50] = "Red";
	char orange[50] = "Orange";

	std::cout << "What is your favorite color?" << std::endl;
	std::cin.getline(userInput, 50);

	if (strcmp(userInput, red) == 0)
	{
		std::cout << "Red? Like the color of roses?" << std::endl;
	}
	else if (strcmp(userInput, orange) == 0)
	{
		std::cout << "Orange is also a fruit." << std::endl;
	}
	else
	{
		std::cout << "I've never heard of that color before." << std::endl;
	}
	*/

	// To Upper
	/*
	int i = 0;
	char charLower[] = "a b c d e f g h i j k l m n o p q r s t u v w x y z\n";
	char b;
	while (charLower[i])
	{
		b = charLower[i];
		putchar(toupper(b));
		i++;
	}
	*/

	// Remove Whitespace
	/*
	char remove[] = "Dinosaurs are amazing!";
	std::cout << removeSpaces(remove) << std::endl;
	*/

	// Substring
	/*
	char mainStr[50] = "The tide comes and finds me ready!";
	
	for (int i = 0; i < 14; i++)
	{
		std::cout << mainStr[i] << std::endl;
	}
	*/

	// Palindrome Test
	/*
	char palStr[20];
	int i;
	int length;
	int flag = 0;

	std::cout << "Enter a word: " << std::endl;
	std::cin >> palStr;

	length = strlen(palStr);

	for (i = 0; i < length; i++)
	{
		if (palStr[i] != palStr[length - i - 1])
		{
			flag = 1;
			break;
		}
	}

	if (flag)
	{
		std::cout << palStr << " is not a palindrome" << std::endl;
	}
	else
	{
		std::cout << palStr << " is a palindrome" << std::endl;
	}
	*/

	// String Length
	/*
	char lengthStr[20] = "Goodspaceprogrammer";
	int numLength = 0;

	numLength = strlen(lengthStr);

	std::cout << numLength << std::endl;
	*/

	// String Reversal
	/*
	int i = 0;
	int length;
	char reverseStr[50] = "Hello my name is Nathan";

	length = strlen(reverseStr);

	for (i = 0; i < length; i++)
	{
		std::cout << reverseStr[length - i - 1] << std::endl;
	}
	*/

	// String Trimming 
	

	return -1;
}

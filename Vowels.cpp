// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

//variables we are gonna use.		
char character;
int A = 0;
int E = 0;
int I = 0;
int O = 0;
int U = 0;
int X = 0;
int Y = 0;
int Z = 0;


int main(int argc, char* argv[])
{

	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}

	//// For debugging purposes only
	//for (int i = 0; i < argc; i++)
	//{
	//	std::cout << i << ":" << argv[i] << std::endl;
	//}

	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}

	///////////////////////
	// Work here with open file.....
	///////////////////////



	

	//while statement to cout the vowels while the file is open and not at its end.
	while (!inFile.eof() && inFile >> character)

	{

		if (character == 'a' || character == 'A')
			A++;
		else if (character == 'e' || character == 'E')
			E++;
		else if (character == 'i' || character == 'I')
			I++;
		else if (character == 'o' || character == 'O')
			O++;
		else if (character == 'u' || character == 'U')
			U++;
		else if (character == 'x' || character == 'X')
			X++;
		else if (character == 'y' || character == 'Y')
			Y++;
		else if (character == 'z' || character == 'Z')
			Z++;
		else {
		}

	}

	//outputting the welcome message and the results to the screen.
	std::cout << std::setfill('*') << std::setw(50) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(7) << '*';
	std::cout << " Welcome to my Letter Count Program ";
	std::cout << std::setfill('*') << std::setw(7) << '*' << std::endl;
	std::cout << std::setfill('*') << std::setw(50) << '*' << std::endl;

	std::cout << std::endl;

	std::cout << "Analyzing file '" << (argv[1]) << "'..." << std::endl;
	std::cout << std::endl;

	std::cout << "Number of A's: " << std::setfill('.') << std::setw(50) << A << std::endl;
	std::cout << "Number of E's: " << std::setw(50) << E << std::endl;
	std::cout << "Number of I's: " << std::setw(50) << I << std::endl;
	std::cout << "Number of O's: " << std::setw(50) << O << std::endl;
	std::cout << "Number of U's: " << std::setw(50) << U << std::endl;
	std::cout << "Number of X's: " << std::setw(50) << X << std::endl;
	std::cout << "Number of Y's: " << std::setw(50) << Y << std::endl;
	std::cout << "Number of Z's: " << std::setw(50) << Z << std::endl;
	std::cout << "THe vowel count is: " << std::setw(45) << A+E+I+O+U << std::endl;
	





	//closing the file
	inFile.close();

	return 0;
}
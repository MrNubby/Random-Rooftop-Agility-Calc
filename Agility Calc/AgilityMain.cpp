#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include"AgilityCalc.h"

using namespace std;





int main()
{
	//ifstream inputFile(R"(C:/Users/Nubby/Desktop/Coding/Dick around code/Agility Calc/xpRates.txt)"); //Opening the input file //If using an input file
	//if (inputFile.is_open()) //Testing to see if file is open
	//{
	//	cout << "It's open\n";
	//}
	//else
	//	cout << "Not open";
	// ==========================================================================================================================//If using an input file

	AgilityCalc runner;
	
	runner.mainMenu();


	cout << "Goodbye!" << endl;

	return 0;
}
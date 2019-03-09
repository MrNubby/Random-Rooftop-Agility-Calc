#include <fstream>
#include<string>
#include<iostream>
#include <stdio.h>
#include "AgilityCalc.h"

using namespace std;

AgilityCalc::AgilityCalc() //initializes all of the AgilityCourse struct members defined in the AgilityCalc class
{
	
	draynor.name = "Draynor Village";
	draynor.lvlReq = 10;
	draynor.xpPerLap = 120;
	draynor.xpPerHour = 10000;

	
	alkharid.name = "Al Kharid";
	alkharid.lvlReq = 20;
	alkharid.xpPerLap = 180;
	alkharid.xpPerHour = 10100;

	
	varrock.name = "Varrock";
	varrock.lvlReq = 30;
	varrock.xpPerLap = 238;
	varrock.xpPerHour = 13200;

	
	canifis.name = "Canifis";
	canifis.lvlReq = 40;
	canifis.xpPerLap = 240;
	canifis.xpPerHour = 19600;

	
	falador.name = "Falador";
	falador.lvlReq = 50;
	falador.xpPerLap = 440;
	falador.xpPerHour = 26800;

	
	seers.name = "Seers'";
	seers.lvlReq = 60;
	seers.xpPerLap = 570;
	seers.xpPerHour = 45600;

	
	pollnivneach.name = "Pollnivneach";
	pollnivneach.lvlReq = 70;
	pollnivneach.xpPerLap = 890;
	pollnivneach.xpPerHour = 52600;

	
	rellekka.name = "Rellekka";
	rellekka.lvlReq = 80;
	rellekka.xpPerLap = 780;
	rellekka.xpPerHour = 54800;

	
	ardougne.name = "Ardougne";
	ardougne.lvlReq = 90;
	ardougne.xpPerLap = 793;
	ardougne.xpPerHour = 62300;
}

void AgilityCalc::displayCourses() //Function to display the stats of every course when called
{
	cout << draynor;
	cout << alkharid;
	cout << varrock;
	cout << canifis;
	cout << falador;
	cout << seers;
	cout << pollnivneach;
	cout << rellekka;
	cout << ardougne;
}

void AgilityCalc::highestCourse(int playerXP, bool &loop, int &choice, int lvl99xp) //shows the user the highest req. course they could complete
{
	if (playerXP < 1154) { //user under lvl 10 agility
		cout << "There are no rooftop courses available to players below level 10 agility. Sorry!\n";

		cout << "\nPress 1 to return to the Main Menu or 2 to exit the program\n";
		cin >> choice;

		if (choice == 1) {
			loop = true;
		}

		else if (choice == 2) {
			loop = false;
		}
	}

	else if (playerXP < 4470) { //user above lvl 10 and under lvl 20 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << draynor;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 13363) { //user above lvl 20 and under lvl 30 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << alkharid;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 37224) { //user above lvl 30 and under lvl 40 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << varrock;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 101333) { //user above lvl 40 and under lvl 50 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << canifis;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 273742) { //user above lvl 50 and under lvl 60 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << falador;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 737627) { //user above lvl 60 and under lvl 70 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << seers;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 1986068) { //user above lvl 70 and under lvl 80 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << pollnivneach;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < 5346332) { //user above lvl 80 and under lvl 90 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << rellekka;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else if (playerXP < lvl99xp) { //user above lvl 90 and under lvl 99 agility
		cout << "This is the highest level rooftop course available to you:\n";
		cout << ardougne;

		cout << "\nEnter any key to return to the Main Menu or press 1 to exit\n";
		cin >> choice;

		if (choice == !1) {
			loop = true;
		}

		else if (choice == 1) {
			loop = false;
		}
	}

	else { //no clue what to do if this activates
		cout << "\nSomething went wrong when the user entered their xp!\n";

		cout << "\nPress 1 to return to the Main Menu or 2 to exit the program\n";
		cin >> choice;

		if (choice == 1) {
			loop = true;
		}

		else if (choice == 2) {
			loop = false;
		}
	}
}

void AgilityCalc::mainMenu() //Main menu of the program
{
	int playerXP;
	const int lvl99xp = 13034431;
	int choice;
	bool loop = true;

	while (loop == true) { //mein menu start

		printf("\033c");

		cout << "\nWelcome to my Agility Program\n" << endl;
		cout << "\nMain Menu\n";
		cout << "\nSelect an Option:\n";
		cout << "\t1. See All Course Info\n";
		cout << "\t2. Calculate my XP till 99\n";
		cout << "\t3. Exit\n";

		cin >> choice;

		if (choice == 1) { //main menu choice 1

			displayCourses();

			cout << "\nWould you like to return to the Main Menu?\n"
				 << "\t1. Yes\n"
				 << "\t2. No\n";

			cin >> choice;

			switch (choice)
			{
			case 1:
				break;

			case 2:
				loop = false;
			}

		} //main menu choice 1

		else if (choice == 2) { //main menu choice 2

			cout << "\nWhat is your current agility xp? (Enter without the using commas)\n";

			cin >> playerXP;

			if (playerXP < 0) { //checks to see if the user entered an xp value lower than 0
				cout << "Error - you can't have negative experience!\n";
			}

			else if (playerXP > lvl99xp) { //checks to see if the user entered an xp value that would already give them 99 agility
				cout << "\nSorry, this calculator is only for those who have yet to reach 99 agility!\n";
			}

			else if (playerXP >= 0 && playerXP < lvl99xp) { //makes sure the xp value given is between 0 and lvl 99 xp

				cout << "\nYou are " << (lvl99xp - playerXP) << " experience away from 99.\n"; //shows the user the amount of xp needed before reaching 99

				highestCourse(playerXP, loop, choice, lvl99xp);

			}

		} //main menu choice 2

		else if (choice == 3) { //main menu choice 3
			loop = false;
		} //main menu choice 3

		else { //failsafe
			
			if (cin.fail()) {
				cin.clear();
				cin.ignore(255, '\n');
			}
			printf("\033c");
			cout << "Invalid Choice, Try Again\n";
		} //failsafe
	} //Main menu end

}; //entire function

ostream & operator<<(ostream& out, AgilityCourse course) //overloading output operator to work with structs
{
	out << "Course: " << course.name << "\n"
		<< "Level Requirement: " << course.lvlReq << "\n"
		<< "XP Per Lap: " << course.xpPerLap << "\n"
		<< "XP Per Hour: " << course.xpPerHour << "\n" << endl;
	return out;
}

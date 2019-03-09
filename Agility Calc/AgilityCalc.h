#ifndef AGILITYCALC_H
#define AGILITYCALC_H

#include <fstream>
#include<string>
#include<iostream>
#include <stdio.h>

using namespace std;

struct AgilityCourse //struct to hold the variable from each course
{
	string name; //name of the course
	int lvlReq; //required level for the course
	int xpPerLap; //xp from completing one lap of the course
	int xpPerHour; //xp from completing the course efficiently per hour
	//int gracePerHour; //future work
};

class AgilityCalc
{
public:

	AgilityCalc();
	void mainMenu();
	void displayCourses();
	void highestCourse(int playerXP, bool &loop, int &choice, int lvl99xp);

private:

	AgilityCourse draynor;
	AgilityCourse alkharid;
	AgilityCourse varrock;
	AgilityCourse canifis;
	AgilityCourse falador;
	AgilityCourse seers;
	AgilityCourse pollnivneach;
	AgilityCourse rellekka;
	AgilityCourse ardougne;

};

ostream & operator<<(ostream& out, AgilityCourse course);


#endif

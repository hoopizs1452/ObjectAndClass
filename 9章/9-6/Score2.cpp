#include <iostream>
#include "Score2.h"
#include <string>
using namespace std;

Score::Score(string newName, int newMath)
{
	name = newName;
	math = newMath;
}

string Score::getName()
{
	return name;
}

int Score::getMath()
{
	return math;
}

void Score::setName(string newNa)
{
	name = newNa;
}

void Score::setMath(int newMa)
{
	math = newMa;
}

void Score::print()
{
	cout << name << " " << math << endl;
}
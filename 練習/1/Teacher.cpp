#include "Teacher.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

Teacher::Teacher(string n, int a, double s)
{
	this->name = n;
	this->age = a;
	this->score = s;
}

void Teacher::setName(string n)
{
	this->name = n;
}

void Teacher::setAge(int a)
{
	this->age = a;
}

void Teacher::setScore(double s)
{
	this->score = s;
}

string Teacher::getName() const
{
	return name;
}

int Teacher::getAge() const
{
	return age;
}

double Teacher::getScore() const
{
	return score;
}

void Teacher::writeToFile(ofstream& input)
{
	input << setprecision(1) << fixed << getName() << " " << getAge()
		<< " " << (double)getScore() << endl;
}

void Teacher::readFromFile(ifstream& output)
{
	char n;
	while (output.get(n))
	{
		cout << setprecision(1) << fixed << n;
	}
	cout << endl;
}
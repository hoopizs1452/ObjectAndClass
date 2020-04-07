#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

Student::Student(string n, Date b, int s)
{
	name = n;
	birthDay = b;
	score = s;
}

void Student::setName(string newName)
{
	name = newName;
}

void Student::setDate(Date newDate)
{
	birthDay = newDate;
}

void Student::setScore(int newScore)
{
	score = newScore;
}

string Student::getName() const
{
	return name;
}

Date Student::getDate() const
{
	return birthDay;
}

int Student::getScore() const
{
	return score;
}

void Student::print()
{
	cout << name << " ";
	birthDay.print();
	cout << score << endl;
}

#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

Student::Student(string newName, Date newDate, int newScore)
{
	name = newName;
	birthDay.setDate(newDate.getMonth(), newDate.getDay(), newDate.getYear());
	score = newScore;
}

void Student::setName(string newN)
{
	name = newN;
}

void Student::setDate(Date newD)
{
	birthDay.setDate(newD.getMonth(), newD.getDay(), newD.getYear());
}

void Student::setScore(int newS)
{
	score = newS;
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
	cout << birthDay.getMonth() << "/" << birthDay.getDay() << "/" << birthDay.getYear() << " ";
	cout << score << endl;
}
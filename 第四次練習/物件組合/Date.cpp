#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

void Date::setDate(int mm, int dd, int yy)
{
	month = mm;
	year = yy;
	day = dd;
}

void Date::setMonth(int newM)
{
	month = newM;
}

void Date::setDay(int newD)
{
	day = newD;
}

void Date::setYear(int newY)
{
	year = newY;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}

void Date::print()
{
	cout << month << "/" << day << "/" << year << endl;
}
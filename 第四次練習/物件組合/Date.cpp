#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
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
	day = newY;
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

int Date::getYear() const
{
	return year;
}

void Date::print()
{
	cout << month << "/" << day << "/" << year << " ";
}

#include "Date.h"

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
	year = newY;
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
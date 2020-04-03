//#pragma once
#ifndef DATE_H
#define DATE_H

#include <array>
#include <iostream>

class Date
{
public:
	//Date(int = 0, int = 0, int = 0);
	void setDate(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth();
	int getDay();
	int getYear();
	void print();
	
private:
	int month;
	int day;
	int year;
};

#endif

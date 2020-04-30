//#pragma once
#ifndef Date_H
#define Date_H

class Date
{
private:
	int month, day, year;
public:
	Date(int = 0, int = 0, int = 0);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
};

#endif
//#pragma once
#ifndef Student_H
#define Student_H

#include <string>
#include "Date.h"
using namespace std;

class Student
{
private:
	string name;
	int score;
	Date birthDay;
public:
	Student(string, Date, int = 0);
	void setName(string);
	void setDate(Date);
	void setScore(int);
	string getName() const;
	Date getDate() const;
	int getScore() const;
	void print();
};

#endif

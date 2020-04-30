#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"
#include "StuCard.h"
using namespace std;

StuCard::StuCard(string n, bool s, double m[], Date b)
{
	name = n;
	sex = s;
	for (int i = 0; i < 3; i++)
	{
		scoreAry[i] = m[i];
	}
	birthDay = b;
}

void StuCard::setName(string newN)
{
	name = newN;
}

void StuCard::setSex(bool newS)
{
	sex = newS;
}

void StuCard::setScore(int s, double newM[])
{
	for (int i = 0; i < s; i++)
	{
		scoreAry[i] = newM[i];
	}
}

void StuCard::setDate(Date newD)
{
	birthDay = newD;
}

string StuCard::getName() const
{
	return name;
}

bool StuCard::getSex() const
{
	return sex;
}

double StuCard::getScore(int y) const
{
	/*for (int i = 0; i < y; i++)
	{
		return scoreAry[i];
	}*/
	return scoreAry[y];
}

Date StuCard::getDate() const
{
	return birthDay;
}

double StuCard::average()
{
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += scoreAry[i];
	}
	return sum / 3;
}

int StuCard::getAge(int y)
{
	return 2020 - y;
}

void StuCard::printCard()
{
	cout << name << ", " << sex << ", ";
	for (int i = 0; i < 3; i++)
	{
		cout << scoreAry[i] << ", ";
	}
	cout << setprecision(1) << fixed << birthDay.getMonth() << "/" << birthDay.getDay() << "/" << birthDay.getYear() << ", ";
	cout << average() << ", " << getAge(birthDay.getYear()) << endl;
}
#include  "StuCard.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

StuCard::StuCard(string n, bool s, double a[])
{
	name = n;
	sex = s;
	for (int i = 0; i < 3; i++)
	{
		scoreAry[i] = a[i];
	}
}

void StuCard::setName(string newN)
{
	name = newN;
}

void StuCard::setSex(bool newS)
{
	sex = newS;
}

void StuCard::setScore(int g, double newA[])
{
	for (int i = 0; i < g; i++)
	{
		scoreAry[i] = newA[i];
	}
}

string StuCard::getName() const
{
	return name;
}

bool StuCard::getSex() const
{
	return sex;
}

double StuCard::getScore(int a) const
{
	return scoreAry[a];
}

void StuCard::writeToFile(ofstream& input)
{
	input << setprecision(1) << fixed << getName() << " " << getSex() << " " << (double)getScore(0) << " " 
		<< (double)getScore(1) << " " << (double)getScore(2) << endl;
}

void StuCard::readFromFile(ifstream& output)
{
	char n;
	while (output.get(n))
	{
		cout << setprecision(1) << fixed << n;
	}
	cout << endl;
}
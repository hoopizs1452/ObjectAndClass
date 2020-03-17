//#pragma once

#ifndef Score2_H
#define Score2_H
#include <string>
using namespace std;
class Score
{
private:
	string name;
	int math;
public:
	Score(string, int = 0);
	int getMath();
	string getName();
	void setMath(int);
	void setName(string);
	void print();
};
#endif
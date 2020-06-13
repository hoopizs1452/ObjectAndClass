//#pragma once

#ifndef Score_H
#define Score_H
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
	//int getScore();
};
#endif

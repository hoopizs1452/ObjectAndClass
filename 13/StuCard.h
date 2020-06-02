#ifndef STUCARD_H
#define STUCARD_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
public:
	StuCard(string, bool, double[] = 0);
	void setName(string);
	void setSex(bool);
	void setScore(int, double[]);
	string getName() const;
	bool getSex() const;
	double getScore(int) const;
	void writeToFile(ofstream&);
	void readFromFile(ifstream&);
};

#endif

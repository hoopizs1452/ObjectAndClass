#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Shape
{
private:
	string color;
public:
	Shape();
	Shape(string);
	void setColor(string);
	string getColor();
	virtual double getVolume() = 0;
	virtual string toString() = 0;
};

#endif // !SHAPE_H


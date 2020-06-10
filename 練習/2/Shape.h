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
	//void toString();
};

#endif // !SHAPE_H


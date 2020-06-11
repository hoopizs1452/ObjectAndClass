#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape2D.h"
#include <string>
using namespace std;

class Rectangle :public Shape2D
{
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double, double, string, bool);
	void setWidth(double);
	void setHeight(double);
	double getWidth() const;
	double getHeight() const;
	double getPerimeter() const;
	double getArea() const;
	string toString() const;
};

#endif // !RECTANGLE_H


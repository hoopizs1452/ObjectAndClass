#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include <string>
using namespace std;

class Circle:public Shape2D
{
private:
	double radius;
public:
	Circle();
	Circle(double, string, bool);
	void setRadius(double);
	double getRadius() const;
	double getPerimeter() const;
	double getArea() const;
	string toString() const;
};

#endif // !CIRCLE_H

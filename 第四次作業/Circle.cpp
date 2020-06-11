#include "Circle.h"
#include <math.h>
#include <sstream>
#include <string>
using namespace std;

Circle::Circle()
{

}

Circle::Circle(double radius, string color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

double Circle::getPerimeter() const
{
	return 2 * 3.14159 * radius;
}

double Circle::getArea() const
{
	return 3.14159 * pow(radius, 2);
}

string Circle::toString() const
{
	stringstream ss;
	ss << "circle, " << radius << ", " << getColor();
	return ss.str();
}
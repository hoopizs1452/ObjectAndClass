#include "Ball.h"
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

Ball::Ball()
{
	radius = 1;
}

Ball::Ball(double radius)
{
	setRadius(radius);
}

Ball::Ball(double radius, const string& color)
{
	this->radius = radius;
	setColor(color);
}

double Ball::getRadius() const
{
	return radius;
}

void Ball::setRadius(double radius)
{
	this->radius = (radius >= 0) ? radius : 0;
}

double Ball::getArea() const
{
	return 4 * 3.14159 * radius * radius;
}

double Ball::getVolume() const
{
	return (3.14159 * radius * radius * radius) * 4 / 3;
}

string Ball::display() const
{
	stringstream ss;
	ss << setprecision(1) << fixed << ", area:" << getArea() << ", volume:" << getVolume() << ", color:" << getColor() << endl;
	return ss.str();
}
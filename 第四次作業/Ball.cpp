#include "Ball.h"
#include <cmath>
#include <sstream>
using namespace std;

Ball::Ball(double radius, string color, bool filled)
{
	this->radius = radius;
	setColor(color);
	setFilled(filled);
}

void Ball::setRadius(double radius)
{
	this->radius = radius;
}

double Ball::getRadius() const
{
	return radius;
}

double Ball::getVolume() const
{
	return (3.14159 * pow(radius, 3)) * 4 / 3;
}

double Ball::getArea() const
{
	return 4 * 3.14159 * pow(radius, 2);
}

string Ball::toString() const
{
	stringstream ss;
	ss << "ball, " << radius << ", " << getColor();
	return ss.str();
}
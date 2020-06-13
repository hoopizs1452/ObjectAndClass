#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include "Ball.h"
using namespace std;

Ball::Ball()
{
	radius = 1;
}

Ball::Ball(double radius, const string& color)
{
	this->radius = radius;
	setColor(color);
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

string Ball::display() const
{
	stringstream ss;
	ss << setprecision(1) << fixed << ", area:" << getArea() << ", volume:" << getVolume()
		<< ", color:" << getColor() << endl;
	return ss.str();
}
#include <math.h>
#include <string>
#include <sstream>
#include <iomanip>
#include "Cube.h"
using namespace std;

Cube::Cube()
{
	length = 1;
}

Cube::Cube(double length, const string& color)
{
	this->length = length;
	setColor(color);
}

void Cube::setLength(double length)
{
	this->length = length;
}

double Cube::getLength() const
{
	return length;
}

double Cube::getVolume() const
{
	return pow(length, 3);
}

double Cube::getArea() const
{
	return 6 * pow(length, 2);
}

string Cube::display() const
{
	stringstream ss;
	ss << setprecision(1) << fixed << ", area:" << getArea() << ", volume:" << getVolume()
		<< ", color:" << getColor() << endl;
	return ss.str();
}
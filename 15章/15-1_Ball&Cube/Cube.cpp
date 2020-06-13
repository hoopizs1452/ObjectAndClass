#include "Cube.h"
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

Cube::Cube()
{
	length = 1;
}

void Cube::setLength(double length)
{
	this->length = (length >= 0) ? length : 0;
}

double Cube::getLength() const
{
	return length;
}

Cube::Cube(double length)
{
	setLength(length);
}

Cube::Cube(double length, const string& color)
{
	setLength(length);
	setColor(color);
}

double Cube::getArea() const
{
	return 6 * length * length;
}

double Cube::getVolume() const
{
	return length * length * length;
}

string Cube::display() const
{
	stringstream ss;
	ss << setprecision(1) << fixed << ", area:" << getArea() << ", volume:" << getVolume() << ", color:" << getColor() << endl;
	return ss.str();
}
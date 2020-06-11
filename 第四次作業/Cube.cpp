#include "Cube.h"
#include <cmath>
#include <sstream>
using namespace std;

Cube::Cube(double side, string color, bool filled)
{
	this->side = side;
	setColor(color);
	setFilled(filled);
}

void Cube::setSide(double side)
{
	this->side = side;
}

double Cube::getSide() const
{
	return side;
}

double Cube::getVolume() const
{
	return pow(side, 3);
}

double Cube::getArea() const
{
	return 6 * pow(side, 2);
}

string Cube::toString() const
{
	stringstream ss;
	ss << "cube, " << side << ", " << getColor();
	return ss.str();
}
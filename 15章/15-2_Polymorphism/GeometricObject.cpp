#include <string>
#include "GeometricObject.h"
using namespace std;

GeometricObject::GeometricObject()
{
	color = "White";
}

GeometricObject::GeometricObject(const string& color)
{
	this->color = color;
}

void GeometricObject::setColor(const string& color)
{
	this->color = color;
}

string GeometricObject::getColor() const
{
	return color;
}
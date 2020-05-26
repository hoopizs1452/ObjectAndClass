#include "GeometricObject.h"
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

GeometricObject::GeometricObject()
{
	color = "white";
}

GeometricObject::GeometricObject(const string& color)
{
	this->color = color;
}

string GeometricObject::getColor() const
{
	return color;
}

void GeometricObject::setColor(const string& color)
{
	this->color = color;
}

string GeometricObject::display(GeometricObject & r) const
{
	stringstream ss;
	ss << setprecision(1) << fixed << ", area:" << r.getArea() << ", volume:" << r.getVolume() << ", color:" << getColor() << endl;
	return ss.str();
}
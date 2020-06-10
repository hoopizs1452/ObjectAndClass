#include "Sphere.h"
#include <sstream>
#include <cmath>

Sphere::Sphere() {

}
Sphere::Sphere(double) {

}
Sphere::Sphere(double r, string c)
{
	this->radius = r;
	setColor(c);
}

void Sphere::setRadius(double r)
{
	this->radius = r;
}

double Sphere::getRadius()
{
	return radius;
}

double Sphere::getVolume()
{
	return (3.14159 * pow(radius, 3)) * 4 / 3;
}

string Sphere::toString()
{
	return "Sphere:";
}
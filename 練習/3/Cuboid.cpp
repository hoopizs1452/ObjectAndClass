#include "Cuboid.h"

Cuboid::Cuboid() {

}
Cuboid::Cuboid(double, double, double) {

}
Cuboid::Cuboid(double l, double w, double h, string c)
{
	setLength(l);
	setWidth(w);
	setHeight(h);
	setColor(c);
}

void Cuboid::setLength(double l)
{
	this->length = l;
}

void Cuboid::setWidth(double w)
{
	this->width = w;
}

void Cuboid::setHeight(double h)
{
	this->height = h;
}

double Cuboid::getLength()
{
	return length;
}

double Cuboid::getWidth()
{
	return width;
}

double Cuboid::getHeight()
{
	return height;
}

double Cuboid::getVolume()
{
	return (length * width * height);
}

string Cuboid::toString()
{
	return "Cuboid:";
}
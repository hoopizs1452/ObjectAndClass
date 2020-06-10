#ifndef CUBOID_H
#define CUBOID_H
#include "Shape.h"


class Cuboid:public Shape
{
private:
	double length, width, height;
public:
	Cuboid();
	Cuboid(double, double, double);
	Cuboid(double, double, double, string);
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	double getLength();
	double getWidth();
	double getHeight();
	double getVolume();
	string toString();
};

#endif // !CUBOID_H


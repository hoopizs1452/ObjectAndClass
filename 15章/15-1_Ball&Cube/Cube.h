#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double length);
	Cube(double length, const string& color);
	double getLength() const;
	void setLength(double);
	double getArea() const;
	double getVolume() const;
	string display() const;

private:
	double length;
};

#endif
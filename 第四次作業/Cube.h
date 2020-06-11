#ifndef CUBE_H
#define CUBE_H
#include "Shape3D.h"

class Cube :public Shape3D
{
private:
	double side;
public:
	Cube(double, string, bool);
	void setSide(double);
	double getSide() const;
	double getVolume() const;
	double getArea() const;
	string toString() const;
};

#endif // !CUBE_H


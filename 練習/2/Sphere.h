#ifndef SPHERE_H
#define SPHERE_H
#include "Shape.h"


class Sphere :public Shape
{
private:
	double radius;
public:
	Sphere();
	Sphere(double);
	Sphere(double, string);
	void setRadius(double);
	double getRadius();
	double getVolume();
	string toString();
};

#endif // !SPHERE_H

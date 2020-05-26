#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball : public GeometricObject
{
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);
	virtual double getArea() const;
	virtual double getVolume() const;
	//string display(GeometricObject &) const;

private:
	double radius;
};

#endif
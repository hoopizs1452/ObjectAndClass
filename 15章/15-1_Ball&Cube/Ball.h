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
	double getArea() const;
	double getVolume() const;
	virtual string display() const;

private:
	double radius;
};

#endif
#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

class Ball:public GeometricObject
{
private:
	double radius;
public:
	Ball();
	Ball(double, const string&);
	void setRadius(double);
	double getRadius() const;
	double getVolume() const;
	double getArea() const;
	virtual string display() const;
};

#endif // !BALL_H


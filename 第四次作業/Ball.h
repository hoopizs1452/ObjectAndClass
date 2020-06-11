#ifndef BALL_H
#define BALL_H
#include "Shape3D.h"

class Ball :public Shape3D
{
private:
	double radius;
public:
	Ball(double, string, bool);
	void setRadius(double);
	double getRadius() const;
	double getVolume() const;
	double getArea() const;
	string toString() const;
};

#endif // !BALL_H

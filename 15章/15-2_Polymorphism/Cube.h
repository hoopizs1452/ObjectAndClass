#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
private:
	double length;
public:
	Cube();
	Cube(double, const string&);
	void setLength(double);
	double getLength() const;
	double getVolume() const;
	double getArea() const;
	virtual string display() const;
};

#endif // !CUBE_H


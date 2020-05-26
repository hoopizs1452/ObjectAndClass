#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H
#include <string>
using namespace std;

class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(const string& color);
	string getColor() const;
	void setColor(const string& color);
	virtual double getArea() const = 0;
	virtual double getVolume() const = 0;
	string display(GeometricObject & r) const;

private:
	string color;
};

#endif 
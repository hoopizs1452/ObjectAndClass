#include "Shape.h"
#include "Sphere.h"
#include "Cuboid.h"
using namespace std;

void display(Shape& g)
{
	Shape* p = &g;
	Sphere* p1 = dynamic_cast<Sphere*>(p);
	Cuboid* p2 = dynamic_cast<Cuboid*>(p);

	if (p1 != NULL)
	{
		cout << p1->toString() << "(" << p1->getRadius() << ")," << setprecision(1) << fixed
			<< p1->getVolume() << "," << p1->getColor() << endl;
	}

	if (p2 != NULL)
	{
		cout << p2->toString() << setprecision(0) << fixed << "(" << p2->getLength() << "," << p2->getWidth()
			<< "," << p2->getHeight() << ")," << setprecision(1) << fixed << p2->getVolume() << "," << p2->getColor() << endl;
	}
}

int main()
{
	double radius, length, width, height;
	string c1, c2;
	cin >> radius >> c1 >> length >> width >> height >> c2;

	Sphere s(radius, c1);
	Cuboid c(length, width, height, c2);

	display(s);
	display(c);

	system("pause");
	return 0;
}
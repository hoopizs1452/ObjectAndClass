#include "Shape.h"
#include "Sphere.h"
#include "Cuboid.h"
using namespace std;

int main()
{
	double radius, length, width, height;
	string c1, c2;
	cin >> radius >> c1 >> length >> width >> height >> c2;

	Sphere s(radius, c1);
	Cuboid c(length, width, height, c2);

	cout << s.toString() << "(" << s.getRadius() << ")," << setprecision(1) << fixed
		<< s.getVolume() << "," << s.getColor() << endl;
	cout << c.toString() << setprecision(0) << fixed << "("  << c.getLength() << "," << c.getWidth()
		<< "," << c.getHeight() << ")," << setprecision(1) << fixed << c.getVolume() << "," << c.getColor() << endl;

	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <iomanip>
#include "GeometricObject.h"
#include "Ball.h"
#include "Cube.h"
using namespace std;

int main()
{
	double radius, length;
	string c1, c2;
	cin >> radius >> c1 >> length >> c2;
	Ball ball(radius, c1);
	Cube cube(length, c2);

	cout << setprecision(1) << fixed << "Ball" << endl << "radius:" << ball.getRadius() << ball.display();
	cout << setprecision(1) << fixed << "Cube" << endl << "length:" << cube.getLength() << cube.display();
}
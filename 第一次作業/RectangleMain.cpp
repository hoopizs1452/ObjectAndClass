#include <iostream>
#include "Rectangle.h"
using namespace std;

double sum(Rectangle rectArray[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += rectArray[i].getArea();
	}
	return sum;
}

int main()
{
	double w1, h1, w2, h2, w3, h3, w4, h4, w5, h5;
	cin >> w1 >> h1 >> w2 >> h2 >> w3 >> h3 >> w4 >> h4 >> w5 >> h5;
	Rectangle r1(w1, h1);
	Rectangle r2(w2, h2);
	Rectangle r3(w3, h3);
	Rectangle r4(w4, h4);
	Rectangle r5(w5, h5);
	Rectangle rectArray[] = {r1, r2, r3, r4, r5};
	int re = Rectangle::getNumOfRect();

	cout << r1.getArea() << " " << r2.getArea() << " " << r3.getArea() << " " << r4.getArea() << " " << r5.getArea() << endl;
	cout << "Total: " << re << " rectangles" << endl;
	cout << "Area: " << sum(rectArray, 5) << endl;

	system("pause");
	return 0;
}
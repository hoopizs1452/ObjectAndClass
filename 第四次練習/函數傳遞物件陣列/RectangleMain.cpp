#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;

double sum(Rectangle rectArray[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += rectArray[i].getArea();

	return sum;
}

void printRectangleArray(Rectangle rectArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << rectArray[i].getHeight() << " " << rectArray[i].getWidth()
			<< " " << rectArray[i].getArea() << endl;
	}

	cout << "Total:" << " " << sum(rectArray, size) << endl;
}

int main()
{
	const int SIZE = 4;

	double height[SIZE];
	double width[SIZE];
	Rectangle rectangleArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cin >> height[i] >> width[i];
	}

	for (int j = 0; j < SIZE; j++)
	{
		rectangleArray[j].setHeight(height[j]);
		rectangleArray[j].setWidth(width[j]);
	}
	printRectangleArray(rectangleArray, SIZE);

	system("pause");
	return 0;
}

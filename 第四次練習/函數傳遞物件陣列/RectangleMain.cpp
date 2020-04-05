#include <iostream>
#include <iomanip>
#include "Rectangle3.h"
using namespace std;

double sum(Rectangle rectangleArray[], int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
		sum += rectangleArray[i].getArea();

	return sum;
}

void printRectangleArray(Rectangle rectangleArray[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << rectangleArray[i].getHeight() << setw(4) << rectangleArray[i].getWidth()
			<< setw(5) << rectangleArray[i].getArea() << endl;
	}

	cout << "Total:" << setw(5) << sum(rectangleArray, size) << endl;
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

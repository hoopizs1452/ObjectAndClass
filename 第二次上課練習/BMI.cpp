#include "BMI.h"

Bmi::Bmi(double newWeight, double newHeight)
{
	weight = newWeight;
	height = newHeight;
}

double Bmi::getWeight()
{
	return weight;
}

double Bmi::getHeight()
{
	return height;
}

void Bmi::setWeight(double newWe)
{
	weight = newWe;
}

void Bmi::setHeight(double newHe)
{
	height = newHe;
}

double Bmi::getBmi()
{
	return weight / (height*height);
}
//#pragma once
#ifndef Bmi_H
#define Bmi_H

class Bmi
{
private:
	double weight, height;
public:
	Bmi(double = 0, double = 0);
	double getWeight();
	double getHeight();
	void setWeight(double);
	void setHeight(double);
	double getBmi();
};
#endif
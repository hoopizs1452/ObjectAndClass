#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Complex
{
private:
	int iNum, cNum;
public:
	Complex();
	Complex(int a, int b);
	int getINum() const;
	int getCNum() const;
	Complex add(const Complex& secondComplex) const;
	Complex subtract(const Complex& secondComplex) const;
	Complex multiply(const Complex& secondComplex) const;
	Complex operator+(const Complex& secondComplex) const;
	Complex operator-(const Complex& secondComplex) const;
	Complex operator*(const Complex& secondComplex) const;
	Complex& operator<<(const Complex& secondComplex);
	Complex& operator>>(const Complex& secondComplex);
	int& operator[](int index);
	Complex& operator+=(const Complex& secondComplex);
	Complex& operator-=(const Complex& secondComplex);
	Complex& operator*=(const Complex& secondComplex);
	Complex& operator++();
	Complex& operator--();
	Complex operator++(int dummy);
	Complex operator--(int dummy);
	//Complex operator+();
	//Complex operator-();
	string toString() const;

};

#endif

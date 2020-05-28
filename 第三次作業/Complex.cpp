#include  "Complex.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Complex::Complex()
{
	iNum = 0;
	cNum = 0;
}

Complex::Complex(int a, int b)
{
	iNum = a;
	cNum = b;
}

int Complex::getINum() const
{
	return iNum;
}

int Complex::getCNum() const
{
	return cNum;
}

Complex Complex::add(const Complex& secondComplex) const
{
	int n = iNum + secondComplex.getINum();
	int d = cNum + secondComplex.getCNum();
	return Complex(n, d);
}

Complex Complex::subtract(const Complex& secondComplex) const
{
	int n = iNum - secondComplex.getINum();
	int d = cNum - secondComplex.getCNum();
	return Complex(n, d);
}

Complex Complex::multiply(const Complex& secondComplex) const
{
	int n = iNum * secondComplex.getINum() + cNum * secondComplex.getCNum() * (-1);
	int d = iNum * secondComplex.getCNum() + cNum * secondComplex.getINum();
	return Complex(n, d);
}

Complex Complex::operator+(const Complex& secondComplex) const
{
	return add(secondComplex);
}

Complex Complex::operator-(const Complex& secondComplex) const
{
	return subtract(secondComplex);
}

Complex Complex::operator*(const Complex& secondComplex) const
{
	return multiply(secondComplex);
}

Complex& Complex::operator<<(const Complex& secondComplex)
{
	return *this;
}

Complex& Complex::operator>>(const Complex& secondComplex)
{
	return *this;
}

int& Complex::operator[](int index)
{
	if (index == 0)
		return iNum;
	else
		return cNum;
}

Complex& Complex::operator+=(const Complex& secondComplex)
{
	*this = add(secondComplex);
	return *this;
}

Complex& Complex::operator-=(const Complex& secondComplex)
{
	*this = subtract(secondComplex);
	return *this;
}

Complex& Complex::operator*=(const Complex& secondComplex)
{
	*this = multiply(secondComplex);
	return *this;
}

Complex& Complex::operator++()
{
	iNum++;
	return *this;
}

Complex& Complex::operator--()
{
	iNum--;
	return *this;
}

Complex Complex::operator++(int dummy)
{
	Complex temp(iNum, cNum);
	iNum += cNum;
	return temp;
}

Complex Complex::operator--(int dummy)
{
	Complex temp(iNum, cNum);
	iNum -= cNum;
	return temp;
}

string Complex::toString() const
{
	stringstream ss;
	ss << iNum << cNum << "i";
	return ss.str();
}
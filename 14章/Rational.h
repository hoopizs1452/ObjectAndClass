//#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
#include <iostream>
using namespace std;

class Rational
{
public:
	Rational();
	Rational(int numerator, int denominator);
	int getNumerator() const;
	int getDenominator() const;
	Rational add(const Rational& secondRational) const; //¥[
	Rational subtract(const Rational& secondRational) const; //´î
	Rational multiply(const Rational& secondRational) const; //­¼
	Rational divide(const Rational& secondRational) const; //°£
	int compareTo(const Rational& secondRational) const;  
	bool equals(const Rational& secondRational) const;
	int intValue() const;
	double doubleValue() const;
	string toString() const;

	friend ostream& operator<<(ostream&, const Rational&);
	friend istream& operator>>(istream&, Rational&);
	Rational& operator+=(const Rational& secondRational);
	Rational& operator-=(const Rational& secondRational);
	Rational& operator*=(const Rational& secondRational);
	Rational& operator/=(const Rational& secondRational);
	int& operator[](int index);
	Rational& operator++();
	Rational& operator--();
	Rational operator++(int dummy);
	Rational operator--(int dummy);
	Rational operator+();
	Rational operator-();

private:
	int numerator;
	int denominator;
	static int gcd(int n, int d);
};

bool operator<(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);
Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);

#endif
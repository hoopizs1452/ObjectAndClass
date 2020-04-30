#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"
#include "StuCard.h"
using namespace std;

double* classAver(StuCard StuCard[], int s)
{
	static double sum[3];
	double sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < s; i++)
	{
		sum1 += StuCard[i].getScore(0);
	}
	sum[0] = sum1 / s;
	for (int i = 0; i < s; i++)
	{
		sum2 += StuCard[i].getScore(1);
	}
	sum[1] = sum2 / s;
	for (int i = 0; i < s; i++)
	{
		sum3 += StuCard[i].getScore(2);
	}
	sum[2] = sum3 / s;
	return sum;
}

int main()
{
	string name;
	bool sex;
	double score[3];
	int month, day, year;

	double m1[3] = { 80.0, 70.0, 90.0 };
	double m2[3] = { 85.0, 77.0, 95.0 };
	double m3[3] = { 83.0, 75.0, 70.0 };
	double m4[3] = { 73.0, 95.0, 67.0 };
	StuCard s1("Jerry", 1, m1, Date(3, 20, 1997));
	StuCard s2("John", 1, m2, Date(5, 20, 1995));
	StuCard s3("Mary", 0, m3, Date(2, 18, 2007));
	StuCard s4("Tom", 1, m4, Date(11, 8, 2003));

	cin >> name >> sex;
	for (int i = 0; i < 3; i++)
	{
		cin >> score[i];
	}
	cin >> month >> day >> year;

	StuCard s5(name, sex, score, Date(month, day, year));

	s1.printCard();
	s2.printCard();
	s3.printCard();
	s4.printCard();
	s5.printCard();

	StuCard s[] = { s1, s2, s3, s4, s5 };

	double* p = classAver(s, 5);

	cout << "Average: " << *p << ", " << *(p + 1) << ", " << *(p + 2) << "\n";


	system("pause");
	return 0;
}
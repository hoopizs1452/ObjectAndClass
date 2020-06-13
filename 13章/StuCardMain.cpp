#include "StuCard.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	double a1[3] = { 80.0, 70.0, 90.0 };
	StuCard s1("Jerry", 1, a1);
	double a2[3] = { 85.0, 77.0, 95.0 };
	StuCard s2("John", 1, a2);
	double a3[3] = { 83.0, 75.0, 70.0 };
	StuCard s3("Mary", 0, a3);
	double a4[3] = { 73.0, 95.0, 67.0 };
	StuCard s4("Tom", 1, a4);
	double a5[3] = { 88.0, 79.0, 71.0 };
	StuCard s5("Claire", 0, a5);

	ofstream input;
	input.open("text.txt");
	s1.writeToFile(input);
	s2.writeToFile(input);
	s3.writeToFile(input);
	s4.writeToFile(input);
	s5.writeToFile(input);
	input.close();

	ifstream output;
	output.open("text.txt");
	s1.readFromFile(output);
	s2.readFromFile(output);
	s3.readFromFile(output);
	s4.readFromFile(output);
	s5.readFromFile(output);
	output.close();

	system("pause");
	return 0;
}
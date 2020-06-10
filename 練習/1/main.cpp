#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Teacher.h"
using namespace std;

int main()
{
	string n1, n2, n3, n4;
	int a1, a2, a3, a4;
	double s1, s2, s3, s4;

	cin >> n1 >> a1 >> s1 >> n2 >> a2 >> s2 >> n3 >> a3 >> s3 >> n4 >> a4 >> s4;
	Teacher t1(n1, a1, s1);
	Teacher t2(n2, a2, s2);
	Teacher t3(n3, a3, s3);
	Teacher t4(n4, a4, s4);

	ofstream input;
	input.open("Teacher.txt");
	t1.writeToFile(input);
	t2.writeToFile(input);
	t3.writeToFile(input);
	t4.writeToFile(input);
	input.close();

	ifstream output;
	output.open("Teacher.txt");
	t1.readFromFile(output);
	t2.readFromFile(output);
	t3.readFromFile(output);
	t4.readFromFile(output);
	output.close();
}
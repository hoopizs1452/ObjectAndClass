#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include <fstream>
using namespace std;

class Teacher
{
private:
	string name;
	int age;
	double score;
public:
	Teacher(string, int = 0, double = 0);
	void setName(string);
	void setAge(int);
	void setScore(double);
	string getName() const;
	int getAge() const;
	double getScore() const;
	void writeToFile(ofstream&);
	void readFromFile(ifstream&);
};

#endif // !TEACHER_H

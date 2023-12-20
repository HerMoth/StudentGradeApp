#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	double TotalGrade;

public:
	string getLetterGrade(double);
	Student(string);
	void AddGrade(double);
	double CalcAverage();
};

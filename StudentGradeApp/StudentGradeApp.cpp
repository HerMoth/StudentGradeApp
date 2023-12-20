#include<iostream>
#include "Student.h"
#include <string>
using namespace std;

int main()
{
	string name;
	int grade = 0;

	cout << "\n\t\tThis app will give you a final letter grade after all 10 grades have been Entered\t " << endl;


	cout << "\nEnter student name" << endl;
	getline(cin, name);
	Student studentName(name);

	for (int x = 1; x <= 10; x++)
	{

		cout << "Enter the grade:  ";
		cin >> grade;
		studentName.AddGrade(grade);
	}
	cout << name << ",has an average grade of: \n" << studentName.CalcAverage();
	cout << "\tLetter Grade: " << studentName.getLetterGrade(studentName.CalcAverage()) << endl;

	return 0;

}
#include "Student.h"
#include<iostream>


Student::Student(string StudentName)
{
	this->name = StudentName;
	this->TotalGrade = 0;
}
double Student::CalcAverage() //Calculates the average of 10 grades
{
	return this->TotalGrade / 10.0;
}
void Student::AddGrade(double Grades)
{

	this->TotalGrade += Grades;
}
string Student::getLetterGrade(double Grade)
{
	while (Grade > 100 || Grade < 0)
	{
		cout << "Error; Invalid grade. Please enter the grades between 0-100:   " << endl;
		cin >> Grade;
	}
	while (Grade > 93)
	{
		return "A";
	}
	while (Grade > 90) {
		return "A-";

	}
	while (Grade > 87) {
		return "B";
	}
    while (Grade > 80) {
        return "B-";
    }
    while (Grade > 77) {
        return "C+";
    }
    while (Grade > 73) {
        return "C";
    }
    while (Grade > 70) {
        return "C-";
    }
    while (Grade > 67) {
        return "D+";
    }
    while (Grade > 63) {
        return "D";
    }
    while (Grade > 60) {
        return "D-";
    }
    while (Grade >= 0) {
        return "F";
    }

    return "What the heck is this... ";

};
#include "Student.h"

Student::Student(int a, string n, int j, string r)
{
	this->leeftijd = a;
	this->naam = n;
	this->jaar = j;
	this->studieRichting = r;
}

int Student::getYear()
{
	return jaar;
}

string Student::getDegree()
{
	return studieRichting;
}

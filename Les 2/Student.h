#pragma once
#include "Persoon.h"

class Student : public Persoon
{
	public:
		Student(int a, string n, int j, string r);
		int getYear();
		string getDegree();
	private:
		int jaar;
		string studieRichting;
};
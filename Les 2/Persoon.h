#pragma once

class Persoon
{
	public:
		Persoon(int a, string n);
		~Persoon();
		int getAge();
		string getName();
	private:
		int leeftijd;
		string naam;
};
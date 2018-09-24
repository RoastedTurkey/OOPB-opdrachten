#include "Persoon.h"

Persoon::Persoon(int a, string n)
{
	this->leeftijd = a;
	this->naam = n;
}

Persoon::~Persoon()
{
}

int Persoon::getAge()
{
	return leeftijd;
}

string Persoon::getName()
{
	return naam;
}

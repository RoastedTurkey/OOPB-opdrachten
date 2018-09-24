#include "Docent.h"

Docent::Docent(int a, string n, string v)
{
	this->leeftijd = a;
	this->naam = n;
	this->vak = v;
}

string Docent::getVak()
{
	return vak;
}

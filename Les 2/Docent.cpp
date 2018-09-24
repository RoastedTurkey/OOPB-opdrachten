#include "Docent.h"

Docent::Docent(int a, string n, string v)
	: Persoon(a, n)
{
	this->vak = v;
}

string Docent::getVak()
{
	return vak;
}

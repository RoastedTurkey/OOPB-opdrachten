#include <iostream>
#include "Bibliotheek.h"



Bibliotheek::Bibliotheek()
{
}


Bibliotheek::~Bibliotheek()
{
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek)
{
	boek = new Boek();
	boek->naam = bibliotheek.boek->naam;
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& andereBieb)
{
	if (this != &andereBieb)
	{
		if (boek)
		{
			delete boek;
		}
		boek = new Boek(andereBieb.boek->naam);
	}
	return *this;
}

void Bibliotheek::teLeen()
{
	std::cout << "Momenteel hebben we: " << boek->naam << " te leen" << std::endl;
}

void Bibliotheek::voegToe(std::string n)
{
	if (boek)
	{
		delete boek;
	}

	boek = new Boek(n);
}

Boek* Bibliotheek::leenBoek()
{
	return boek;
}

void Bibliotheek::terugBoek(Boek* b)
{
	if (!boek)
	{
		boek = b;
	}
	else
	{
		std::cout << "Sorry, geen boeken passen meer in de bieb." << std::endl;
	}
}
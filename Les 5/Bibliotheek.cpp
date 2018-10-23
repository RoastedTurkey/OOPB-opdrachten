#include <iostream>
#include <string>
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
	if (boek)
	{
		std::cout << "Momenteel hebben we: " << boek->naam << " te leen" << std::endl;
	}
	else
	{
		std::cout << "Momenteel hebben we geen boeken te leen" << std::endl;
	}
}

void Bibliotheek::voegToe(std::string n)
{
	if (boek)
	{
		delete boek;
	}

	boek = new Boek(n);
}

Boek* Bibliotheek::boekLenen()
{
	if (boek)
	{
		Boek* leenBoek = boek;
		boek = NULL;
		return leenBoek;
	}
	else
	{
		std::cout << "Ik zei, we hebben momenteel geen boeken te leen" << std::endl;
		return NULL;
	}
}

void Bibliotheek::boekTerugbrengen(Boek* b)
{
	if (!boek)
	{
		boek = b;
	}
	else
	{
		std::cout << "Sorry, er passen geen boeken meer in de bieb." << std::endl;
	}
}
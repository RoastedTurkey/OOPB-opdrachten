#pragma once

#include <string>
#include "Boek.h"

class Bibliotheek
{
	public:
		Bibliotheek();
		~Bibliotheek();
		Bibliotheek(const Bibliotheek& bibliotheek);
		Bibliotheek& operator=(const Bibliotheek&);

		void teLeen();
		void voegToe(std::string n);
		Boek* leenBoek();
		void terugBoek(Boek* b);
	private:
		Boek* boek = new Boek();
};


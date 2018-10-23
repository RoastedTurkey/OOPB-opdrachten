#pragma once

#include <string>
#include "Boek.h"

class Bibliotheek
{
	public:
		Bibliotheek();
		virtual ~Bibliotheek();
		Bibliotheek(const Bibliotheek& bibliotheek);
		Bibliotheek& operator=(const Bibliotheek&);

		void teLeen();
		void voegToe(std::string n);
		Boek* boekLenen();
		void boekTerugbrengen(Boek* b);
	private:
		Boek* boek = new Boek();
};


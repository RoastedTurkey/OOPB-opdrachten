#pragma once

#include <string>

class Boek
{
	public:
		Boek();
		Boek(std::string n);
		~Boek();
		std::string naam = "onbekend";
};


#pragma once

#include <string>

class Boek
{
	public:
		Boek();
		Boek(std::string n);
		virtual ~Boek();
		std::string naam = "onbekend";
};


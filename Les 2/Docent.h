#pragma once
#include "Persoon.h"

class Docent : public Persoon
{
	public:
		Docent(int a, string n, string v);
		string getVak();
	private:
		string vak;
};
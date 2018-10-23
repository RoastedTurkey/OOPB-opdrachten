#pragma once
#include "HogeSnelheidsTrein.h"
class Thalys :
	public HogeSnelheidsTrein
{
	public:
		Thalys();
		~Thalys();
		void vertelSom() override;

};


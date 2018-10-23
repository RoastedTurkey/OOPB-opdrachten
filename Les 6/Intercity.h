#pragma once
#include "Trein.h"
class Intercity :
	public Trein
{
	public:
		Intercity();
		virtual ~Intercity();
		void vertelSom() override;
};


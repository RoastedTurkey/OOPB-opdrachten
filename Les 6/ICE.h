#pragma once
#include "HogeSnelheidsTrein.h"
class ICE :
	public HogeSnelheidsTrein
{
	public:
		ICE();
		virtual ~ICE();
		void vertelSom() override;

};


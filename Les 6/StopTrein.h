#pragma once
#include "Trein.h"
class StopTrein :
	public Trein
{
	public:
		StopTrein();
		virtual ~StopTrein();
		void vertelSom() override;
};


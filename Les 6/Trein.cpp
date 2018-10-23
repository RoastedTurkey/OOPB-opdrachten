#include "Trein.h"



Trein::Trein(int mens)
{
	passagiers = mens;
}


Trein::~Trein()
{
}

float Trein::berekenOpbrengst()
{
	return float(passagiers) * prijsKaartje;
}
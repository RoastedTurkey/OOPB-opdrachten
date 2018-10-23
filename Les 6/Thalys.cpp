#include "Thalys.h"
#include <iostream>



Thalys::Thalys()
	: HogeSnelheidsTrein(320, 1.4)
{
}


Thalys::~Thalys()
{
}

void Thalys::vertelSom()
{
	std::cout << "Een volle thalys brengt " << berekenOpbrengst << " euro op" << std::endl;
}
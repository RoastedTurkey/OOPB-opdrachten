#include "ICE.h"
#include <iostream>



ICE::ICE()
	: HogeSnelheidsTrein(400, 1.2)
{
}


ICE::~ICE()
{
}

void ICE::vertelSom()
{
	std::cout << "Een volle ICE brengt " << berekenOpbrengst << " euro op" << std::endl;
}
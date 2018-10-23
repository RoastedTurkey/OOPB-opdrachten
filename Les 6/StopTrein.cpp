#include "StopTrein.h"
#include <iostream>



StopTrein::StopTrein()
	: Trein(80)
{
}


StopTrein::~StopTrein()
{
}

void StopTrein::vertelSom()
{
	std::cout << "Een volle stoptrein brengt " << berekenOpbrengst << " euro op" << std::endl;
}
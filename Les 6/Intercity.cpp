#include "Intercity.h"
#include <iostream>



Intercity::Intercity()
	: Trein(240)
{
}


Intercity::~Intercity()
{
}


void Intercity::vertelSom()
{
	std::cout << "Een volle intercity brengt " << berekenOpbrengst << " euro op" << std::endl;
}
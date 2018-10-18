#include <iostream>
#include "Euro.h"

Euro::Euro() : Munt(1.0)
{

}

void Euro::declareAmmount()
{
	std::cout << "1 Euro added to balance" << std::endl;
}
#include <iostream>
#include "FiftyCent.h"

FiftyCent::FiftyCent() : Munt(0.5)
{

}

void FiftyCent::DeclareAmmount()
{
	std::cout << "50 cents added to balance" << std::endl;
}
//#include <string>
//std::string "asdasgfdgd";

#include "FiftyCent.h"
#include "Euro.h"
#include "KoffieMuntje.h"
#include "CoffeeMachine.h"
#include <iostream>

int main()
{
	CoffeeMachine* machine = new CoffeeMachine();
	FiftyCent* fiftycent = new FiftyCent();
	Euro* euro = new Euro();
	KoffieMuntje* kofmunt = new KoffieMuntje();

	machine->InsertCoin(kofmunt);
	machine->BrewDeluxe();

	machine->InsertCoin(euro);
	machine->FlushBalance();

	machine->InsertCoin(fiftycent);
	machine->BrewCoffee();

	machine->InsertCoin(euro);
	machine->BrewCappuccino();

	char piep;
	std::cin >> piep;

	return 0;
}
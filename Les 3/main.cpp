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

	machine->insertCoin(kofmunt);
	machine->brewDeluxe();

	machine->insertCoin(euro);
	machine->flushBalance();

	machine->insertCoin(fiftycent);
	machine->brewCoffee();

	machine->insertCoin(euro);
	machine->brewCappuccino();

	char piep;
	std::cin >> piep;

	return 0;
}
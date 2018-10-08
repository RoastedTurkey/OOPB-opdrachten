#pragma once
#include "FiftyCent.h"
#include "Euro.h"
#include "KoffieMuntje.h"

class CoffeeMachine
{
	private:
		float balance;
		bool koffmunt = false;
	public:
		CoffeeMachine();
		void InsertCoin(Munt* munt);
		void InsertCoin(KoffieMuntje* kofmuntje);
		void FlushBalance();
		void BrewCoffee();
		void BrewCappuccino();
		void BrewDeluxe();
		int BrewText(string kof);
		bool BalanceCheck(float price);
};
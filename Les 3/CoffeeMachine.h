#pragma once
#include <string>
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
		void insertCoin(Munt* munt);
		void insertCoin(KoffieMuntje* kofmuntje);
		void flushBalance();
		void brewCoffee();
		void brewCappuccino();
		void brewDeluxe();
		void brewText(std::string kof);
		bool balanceCheck(float price);
};
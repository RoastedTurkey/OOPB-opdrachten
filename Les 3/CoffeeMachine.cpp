#include "CoffeeMachine.h"
#include <iostream>

CoffeeMachine::CoffeeMachine()
{

}

void CoffeeMachine::InsertCoin(Munt* munt)
{
	if (!this->koffmunt)
	{
		this->balance = this->balance + munt->value;
		munt->DeclareAmmount();
		std::cout << "Your new balance is" << this->balance << std::endl;
		std::cout << "You have inserted enough money to buy:" << std::endl;
		if (this->balance > 0)
		{
			std::cout << "- coffee" << std::endl;
		}
		if (this->balance > 0.5)
		{
			std::cout << "- cappuccino" << std::endl;
		}
		if (this->balance > 1.0)
		{
			std::cout << "- deluxe" << std::endl;
		}
		munt->~Munt();
	}
}

void CoffeeMachine::InsertCoin(KoffieMuntje* kofmuntje)
{
	if (!this->koffmunt)
	{
		this->koffmunt = true;
		kofmuntje->~KoffieMuntje();
		std::cout << "You inserted a coffee coin, you may choose any one drink" << std::endl;
	}
}

void CoffeeMachine::FlushBalance()
{
	if (!this->koffmunt)
	{
		int counter = 0;
		for (int i = 0; i < this->balance; i++)
		{
			Euro* flushEuro = new Euro();
			counter++;
		}
		this->balance = this->balance - float(counter);
		if (this->balance != 0)
		{
			FiftyCent* flushfiftycent = new FiftyCent();
		}
		this->balance = 0;
	}
	else
	{
		KoffieMuntje* kofmunt = new KoffieMuntje();
		this->koffmunt = false;
	}
}

void CoffeeMachine::BrewCoffee()
{
	if (BalanceCheck(0.5))
	{
		//Coffee* kofie = new Coffee();
		int BrewText(string("coffee"));
	}
}

void CoffeeMachine::BrewCappuccino()
{
	if (BalanceCheck(1.0))
	{
		//Cappuccino* capu = new Cappuccino();
		int BrewText(string("cappuccino"));
	}
}

void CoffeeMachine::BrewDeluxe()
{
	if (BalanceCheck(1.5))
	{
		//Deluxe* deluxe = new Deluxe();
		int BrewText(string("deluxe"));
	}
}

int CoffeeMachine::BrewText(string kof)
{
	std::cout << "prepairing your" << kof << ":..........:" << std::endl;
	std::cout << "prepairing your" << kof << ":|.........:" << std::endl;
	std::cout << "prepairing your" << kof << ":||........:" << std::endl;
	std::cout << "prepairing your" << kof << ":|||.......:" << std::endl;
	std::cout << "prepairing your" << kof << ":||||......:" << std::endl;
	std::cout << "prepairing your" << kof << ":|||||.....:" << std::endl;
	std::cout << "prepairing your" << kof << ":||||||....:" << std::endl;
	std::cout << "prepairing your" << kof << ":|||||||...:" << std::endl;
	std::cout << "prepairing your" << kof << ":||||||||..:" << std::endl;
	std::cout << "prepairing your" << kof << ":|||||||||.:" << std::endl;
	std::cout << "prepairing your" << kof << ":||||||||||:" << std::endl;
	std::cout << "Please remove your cup, enjoy CAUTION: HOT" << std::endl;

	char pak;
	std::cin >> pak;

	return 0;
}

bool CoffeeMachine::BalanceCheck(float price)
{
	if (!this->koffmunt && this->balance < price)
	{
		std::cout << "insufficient funds for this item" << std::endl;
		return false;
	}
	else
	{
		if (this->koffmunt)
		{
			this->koffmunt = false;
		}
		else
		{
			this->balance = this->balance - price;
		}
		return true;
	}
}
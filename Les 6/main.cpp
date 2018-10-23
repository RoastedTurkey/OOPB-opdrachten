#include <iostream>
#include "Intercity.h"
#include "StopTrein.h"
#include "Thalys.h"
#include "ICE.h"

//Abstract classes can't be instantiated
//a way to force people to make the subclasses

//class Shape
//virtual float area() = 0; NULL, doesn't exist (pure virtual function)
//if a class has even 1(one) pure virtual function the class becomes/is a virtual class.

//class Circle : public Shape
//float area() override;

//30  oktober 23:59

int main()
{
	Intercity i = Intercity();
	StopTrein s = StopTrein();

	Thalys t = Thalys();
	ICE c = ICE();

	i.vertelSom();
	s.vertelSom();
	t.vertelSom();
	c.vertelSom();


	//wachten op input
	char p;
	std::cin >> p;

	return 0;
}
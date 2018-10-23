#include <iostream>
#include "Bibliotheek.h"

//when self managing memory, always have the big three: Copy-constructor, Destructor, and Assignment operator

//copy constructor
//Broodmandje(const Broodmantje& b);

//assignment operator
//Broodmantje& operator=(const Broodmantje& b);

//Assignment: make a sad book(library?), like the sad bread basket
//- make a book on the heap
//- make it possible for a book to be borrowed
//- multiple books

int main()
{
	std::cout << "Bibliotheek openen" << std::endl;
	Bibliotheek bieb1 = Bibliotheek();
	bieb1.teLeen();

	bieb1.voegToe("Moby Dick");
	bieb1.teLeen();

	std::cout << "Tweede Bieb net als eerste openen" << std::endl;
	Bibliotheek bieb2;
	bieb2 = bieb1;
	bieb2.teLeen();

	std::cout << "Derde bieb maken door eeste te clonen" << std::endl;
	Bibliotheek bieb3 = bieb1;
	bieb3.teLeen();

	bieb1.voegToe("Het restaurant aan het einde van de melkweg");
	bieb2.voegToe("De kleur van magie");

	bieb1.teLeen();
	bieb2.teLeen();
	bieb3.teLeen();

	//wachten op input
	char p;
	std::cin >> p;

	return 0;
}
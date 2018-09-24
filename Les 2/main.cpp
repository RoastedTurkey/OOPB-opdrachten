#include "Student.h"
#include "Docent.h"
#include <iostream>

int main(){
	Student* s = new Student(22, "Jip", 2, "GameArt");
	Docent* d = new Docent(38, "Janneke", "Research");

	std::cout << "student" << s->getName << "is" << s->getAge << "jaar oud, studeert" << s->getDegree << "en zit in jaar" << s->getYear << std::endl;
	std::cout << "docent" << d->getName << "is" << d->getAge << "jaar oud en geeft het vak" << d->getVak << std::endl;

	return 0;
}
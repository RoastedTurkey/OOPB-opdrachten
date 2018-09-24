#include "Les.h"
#include "Viewer.h"
#include <iostream>

int main(){
	//opent de viewer
	Viewer view = Viewer();

	//maakt een les aan
	Les les = Les(2018, 9, 18, 10, 0, 105, "IB", 168, "G&I2-KOBOPB");
	
	//voegt een beschrijving toe
	les.changeDescription("Object Orientated Programming Basic");
	
	//voegt alle klassen die de les volgen toe
	les.addKlas("GAR2A", "GAR2B", "GDS2", "IAD2", "UU");
	
	//voegt de leraar toe die de les geeft
	les.addTeacher("EdOuw");
	
	view.changeKlas("GAR2A");
	view.draw();

	return 0;
}
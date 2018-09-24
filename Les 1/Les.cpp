#include "Les.h"

Les::Les(int y, int m, int d, int h, int mn, int len, string bldng, int clsrm, string vk) {
	year = y;
	month = m;
	day = d;
	hour = h;
	minute = mn;
	duration = len;
	building = bldng;
	classroom = clsrm;
	vak = vk;
}

void Les::changeDate() {
	//code om de datum van het les object aan te passen
}

void Les::addKlas() {
	//code om klassen in de klassenlist van het les object te stoppen
}
void Les::removeKlas() {
	//code om klassen uit de klassenlist van het les object te halen
}

void Les::addTeacher() {
	//code om klassen in de klassenlist van het les object te stoppen
}
void Les::removeTeacher() {
	//code om klassen uit de klassenlist van het les object te halen
}

void Les::changeDescription(string text) {
	//code om de beschrijving te veranderen
	description = text;
}
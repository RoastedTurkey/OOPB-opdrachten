#include "Viewer.h"

Viewer::Viewer() {
	//currentMo = huidige maand van de server;
	//currentWe = huidige week van de server;
	//currentDa = huidige dag van de server;
}

void Viewer::chandeMWDMode(int num) {
	monthWeekDayMode = num;
}

void Viewer::changeViewMode(int num) {
	viewMode = num;
}

void Viewer::changeKlas(string klas) {
	currentKlas = klas;
}

void Viewer::changeDocent(string docent) {
	currentDocent = docent;
}

void Viewer::changeVak(string vak) {
	currentVak = vak;
}

void Viewer::changeLokaal(string lokaal) {
	currentLokaal = lokaal;
}

void Viewer::changeMonth(int mo) {
	currentMo = mo;
}

void Viewer::changeWeek(int we) {
	currentWe = we;
}

void Viewer::changeDay(int da) {
	currentDa = da;
}

void Viewer::draw() {
	//code om de lessen die aan de huidige critera voldoen te zoeken
	//meer code om daarna die lessen weer te geven aan de hand van de weergave modes
}
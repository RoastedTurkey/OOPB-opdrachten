#pragma once

class Viewer {
	private:
		//0 = monthview, 1 = weekview, 2 = dayview
		int monthWeekDayMode = 1;
		//0 = Klas, 1 = Docent, 2 = Vak, 3 = Lokaal
		int viewMode = 0;
		string currentKlas, currentDocent, currentVak, currentLokaal;
		int currentMo, currentWe, currentDa;
	public:
		//verandert de weergave tussen maand/week/dag-overzicht
		void chandeMWDMode(int num);

		//verandert de weergave tussen klas/docent/vak/lokaal
		void changeViewMode(int num);

		//verandert de huidige klas om weer te geven
		void changeKlas(string klas);

		//verandert de huidige docent om weer te geven
		void changeDocent(string docent);

		//verandert het huidige vak om weer te geven
		void changeVak(string vak);

		//verandert het huidige lokaal om weer te geven
		void changeLokaal(string lokaal);

		void changeMonth(int mo);
		void changeWeek(int we);
		void changeDay(int da);

		//tekent alle lessen die aan de zoek-criteria voldoen
		void draw();
};
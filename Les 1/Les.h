#pragma once

class Les {
	private:
	
	public:
		int year, month, day, hour, minute, duration, classroom;
		string description, building, vak;

		//list van klassen die de les volgen
		//een 2e list van leraren die de les geven

		Les(int y, int m, int d, int h, int mn, int len, string bldng, int clsrm, string vk);

		void changeDate();

		void addKlas();
		void removeKlas();

		void addTeacher();
		void removeTeacher();

		void changeDescription(string text);
};
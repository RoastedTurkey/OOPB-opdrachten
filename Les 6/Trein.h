#pragma once
class Trein
{
	public:
		Trein(int mens);
		virtual ~Trein();

		float berekenOpbrengst();
		virtual void vertelSom() = 0;

	private:
		int passagiers;
		float prijsKaartje = 2.5f;

};


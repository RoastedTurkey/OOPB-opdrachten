#pragma once
class Trein
{
	public:
		Trein(int mens);
		virtual ~Trein();

		float berekenOpbrengst();

	private:
		int passagiers;
		float prijsKaartje = 2.5f;
		virtual void ditIsEenAbstractClassNu() = 0;

};


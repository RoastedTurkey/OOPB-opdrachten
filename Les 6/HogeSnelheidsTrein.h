#pragma once
class HogeSnelheidsTrein
{
	public:
		HogeSnelheidsTrein(int mens, float extra);
		virtual ~HogeSnelheidsTrein();
		float berekenOpbrengst();

	private:
		int passagiers;
		float prijsKaartje = 3.8f;
		float extraToeslag;
		virtual void ditIsEenAbstractClassNu() = 0;

};


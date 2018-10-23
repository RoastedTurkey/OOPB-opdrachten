#pragma once
class HogeSnelheidsTrein
{
	public:
		HogeSnelheidsTrein(int mens, float extra);
		virtual ~HogeSnelheidsTrein();
		float berekenOpbrengst();
		virtual void vertelSom() = 0;

	private:
		int passagiers;
		float prijsKaartje = 3.8f;
		float extraToeslag;

};


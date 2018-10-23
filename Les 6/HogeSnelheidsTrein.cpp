#include "HogeSnelheidsTrein.h"



HogeSnelheidsTrein::HogeSnelheidsTrein(int mens, float extra)
{
	passagiers = mens;
	extraToeslag = extra;
}


HogeSnelheidsTrein::~HogeSnelheidsTrein()
{
}

float HogeSnelheidsTrein::berekenOpbrengst()
{
	return float(passagiers) * (prijsKaartje + extraToeslag);
}

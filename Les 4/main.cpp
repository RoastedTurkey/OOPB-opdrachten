#include <iostream>
#include <fstream>

#define FILE "C:/Users/Adriaan/Desktop/HKU/1819/KOOPB-opdrachten/Les 4/texts/jabberwocky.txt"

int main()
{
	std::ifstream in_stream;

	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Probleem bij openen file" << FILE  << std::endl;
		exit(1);
	}

	char ch;

	in_stream >> std::noskipws;

	while (!in_stream.eof())
	{
		//in_stream.get(ch);
		//in_stream >> ch;

		//std::cout.put(ch);
		//std::cout << ch;
	}

	return 0;
}
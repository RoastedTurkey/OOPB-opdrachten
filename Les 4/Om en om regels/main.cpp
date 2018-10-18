#include <iostream>
#include <fstream>
#include <string>

#define FILE "/Les 4/texts/jabberwocky.txt"
#define ALTFILE "/Les 4/texts/jabberwocky_lat.txt"
#define OUTFILE "/Les 4/texts/output.txt"

int main()
{
	char ch;

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Probleem bij openen file" << FILE << std::endl;
		exit(1);
	}

	std::ifstream in_stream_alt;
	in_stream_alt.open(ALTFILE);
	if (!in_stream_alt)
	{
		std::cout << "Probleem bij openen file" << FILE << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(OUTFILE);
	if (!out_stream)
	{
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	std::string data;
	std::string data_alt;
	bool swap = false;

	while (!in_stream.eof())
	{
		std::getline(in_stream, data);
		std::getline(in_stream_alt, data_alt);

		if (!swap)
		{
			out_stream << data << std::endl;
		}
		else
		{
			out_stream << data_alt << std::endl;
		}
		swap = !swap;
	}

	in_stream.close();
	in_stream_alt.close();
	out_stream.close();

	return 0;
}
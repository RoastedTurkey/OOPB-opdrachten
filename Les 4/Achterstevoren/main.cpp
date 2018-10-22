#include <iostream>
#include <fstream>

#define FILE "/Les 4/texts/jabberwocky.txt"
#define OUTFILE "/Les 4/texts/output.txt"

int howManyCharsInFile()
{
	char ch;
	std::ifstream in_stream;

	int count = 0;

	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	in_stream.get(ch);
	while (!in_stream.fail())
	{
		count++;
		in_stream.get(ch);
	}
	in_stream.close();

	std::cout << count << " tekens in bestand" << std::endl;

	return count;
}

char getCharAtPos(int number)
{
	char ch;
	std::ifstream in_stream;

	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	for (int i = 0; i < number; i++)
	{
		in_stream.get(ch);
	}
	in_stream.close();
	return ch;
}

int main()
{
	std::ofstream out_stream;
	out_stream.open(OUTFILE);
	if (!out_stream)
	{
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	int count;

	count = howManyCharsInFile();

	for (int i = count; i > 0; i--)
	{
		out_stream << getCharAtPos(i);
	}
	out_stream.close();

	return 0;
}
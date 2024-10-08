#include <iostream>
#include <cstdio>

int main()
{
	std::ifstream infile;
	std::infile.open("source.pdf",std::ios::binary|std::ios::in);
	std::ofstream outfile;
	std::outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);

	reversed_file(&infile, outfile)

	infile.close();
	outfile.close();
}
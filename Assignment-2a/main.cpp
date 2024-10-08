#include <iostream>
#include <cstdio>

int main()
{
	std::ifstream infile;
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	std::ofstream outfile;
	std::outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
	reverse_file(&infile, outfile)


}
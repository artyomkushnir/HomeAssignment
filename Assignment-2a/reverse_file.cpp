#include <iostream>
#include <cstdio>

void reverse_file(std::ifstream* infile, std::ofstream* outfile);
{
	file_size = std::filesystem::file_size(infile);
	char buffer[file_size];
	infile.read((char *)&buffer,sizeof(buffer));

	outfile.write((char *)&buffer,sizeof(buffer));
}
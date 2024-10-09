/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include <cstdio>
#include "reverse_file.h"
#include <fstream>

void reverse_file(std::ifstream* infile, std::ofstream outfile);
{
	file_size = std::filesystem::file_size(infile);
	char buffer[file_size];
	std::infile.read((char *)&buffer,sizeof(buffer));

	std::outfile.write((char *)&buffer,sizeof(buffer));

	for (std::size_t i = file_size; i > 0; --i) //
	{
        outfile.put(buffer[i - 1]);
    }

    delete[] buffer;

}
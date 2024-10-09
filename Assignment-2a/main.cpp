/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include <cstdio>
#include "reverse_file.h"
#include <fstream>

int main()
{
	std::ifstream infile;
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	std::ofstream outfile;
	outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);

	reverse_file(&infile, outfile);

	infile.close();
	outfile.close();
}
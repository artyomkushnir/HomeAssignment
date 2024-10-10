/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include <cstdio>
#include "reverse_file.h"
#include <fstream>

int main()
{
	std::string inputFilePath = "source.pdf";
	std::string outputFilePath = "temppdf.pdf";
	
	reverse_file(inputFilePath, outputFilePath);

	return 0;
}
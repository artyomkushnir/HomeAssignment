/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include <filesystem>
#include "reverse_file.h"

void reverse_file(const std::string &inputFilePath, const std::string &outputFilePath)
{
	std::streamsize fileSize = std::filesystem::file_size(inputFilePath);
	char *buffer = new char[fileSize];

	std::ifstream infile(inputFilePath, std::ios::binary|std::ios::in);
	infile.read(buffer, fileSize);
	infile.close();

	for(std::streamsize i=0; i<fileSize/2; i++) 
	{
 		int t = buffer[i];
  		buffer[i] = buffer[fileSize-i-1];
  		buffer[fileSize-i-1] = t;
	}

	std::ofstream outfile(outputFilePath, std::ios::binary|std::ios::out);
	outfile.write(buffer, fileSize);
	outfile.close();
    delete[] buffer;

}

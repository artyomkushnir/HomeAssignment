/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include "hello.h"

int main(int argc, char *argv[]) 
    {
        std::string str1;
        hello("World");
        while(1)
        {
            std::cin>>str1;
            hello(str1);
        }
    }
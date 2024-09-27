/* Artyom Kushnir st135665@student.spbu.ru
*/
using namespace std;
#include <iostream>
#include "hello.h"

int main(int argc, char *argv[]) 
    {
        string str1;
        hello("World");
        while(1)
        {
            cin>>str1;
            hello(str1);
        }
    }
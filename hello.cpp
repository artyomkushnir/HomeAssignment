/* Artyom Kushnir st135665@student.spbu.ru
*/
using namespace std;
#include <hello.h>
#include <iostream>
void hello(string str1)
{
    if (str1.empty()) 
    {
        cout<<"Hello, world!"<<std::endl;
    } 
    else 
    {
        std::cout <<"Hello, "<<str1<<"!"<<std::endl;
    }

}
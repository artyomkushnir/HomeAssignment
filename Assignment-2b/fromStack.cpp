/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <cstdlib>
#include <iostream>

double fromStack(double* stack, int& top)
{
    if (top < 0) 
    {
        std::cerr << "Стек пуст" << std::endl;
        exit(EXIT_FAILURE);
    }
    return stack[top--];
}
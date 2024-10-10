/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include <cstring>
#include <cctype>
#include "RPN.h"
#include <cstdlib>

double calculateRPN(const char* expression)
{
    const int MAX_SIZE = 1024; 
    double* stack = new double[MAX_SIZE]; 
    int top = -1; //указатель на вершину стека
    const char* token = strtok(const_cast<char*>(expression), " ");

    while (token) 
    {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) 
        {
            toStack(stack, top, atof(token));
        } 
        else
        {
            double b = fromStack(stack, top);
            double a = fromStack(stack, top);

            switch (token[0]) {
                case '+':
                    toStack(stack, top, a + b);
                    break;
                case '-':
                    toStack(stack, top, a - b);
                    break;
                case '*':
                    toStack(stack, top, a * b);
                    break;
                case '/':
                    toStack(stack, top, a / b);
                    break;            }
        }
        token = strtok(nullptr, " ");
    }

    return fromStack(stack, top);
}
#ifndef RPN_h
#define RPN_h
#include <iostream>
#include <cstdlib>

void toStack(double* stack, int& top, double value);

double fromStack(double* stack, int& top);

double calculateRPN(const char* expression);

#endif // RPN_h
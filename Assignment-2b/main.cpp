/* Artyom Kushnir st135665@student.spbu.ru
*/
#include "RPN.h"

int main()
{
	const int MAX_LENGTH = 128; 
    char expression[MAX_LENGTH];

	std::cin.getline(expression, MAX_LENGTH);

    while (expression != "stop")
    {
		double result = calculateRPN(expression); 
        std::cout <<"Результат: "<<result<<std::endl;
        std::cin.getline(expression, MAX_LENGTH);
    }
}

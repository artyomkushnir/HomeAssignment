/* Artyom Kushnir st135665@student.spbu.ru
*/
#include <iostream>
#include "greet.h"

int main(int argc, char *argv[]) {
    std::string str1;
    
    greet(""); // Выводит "Hello, world!"
    
    while (true) {
        std::cout << "Введите имя (или 'exit' для выхода): ";
        std::cin >> str1;

        if (str1 == "exit") {
            break;
        }

        greet(str1); // Выводит "Hello, <строка>!"
    }

    return 0;
}
#include <iostream>
#include <Windows.h>
#include "math_functions.h"

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2;
    char operation;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите операцию (+, -, *, /): ";
    std::cin >> operation;

    switch (operation) {
    case '+':
        std::cout << "Результат: " << add(num1, num2) << std::endl;
        break;
    case '-':
        std::cout << "Результат: " << subtract(num1, num2) << std::endl;
        break;
    case '*':
        std::cout << "Результат: " << multiply(num1, num2) << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            std::cout << "Результат: " << divide(num1, num2) << std::endl;
        }
        else {
            std::cout << "Ошибка: деление на ноль!" << std::endl;
        }
        break;
    default:
        std::cout << "Ошибка: неверная операция!" << std::endl;
        break;
    }

    return 0;
}

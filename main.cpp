#include <iostream>
#include <windows.h>
#include "for_func.h"

int main1(){
    SetConsoleOutputCP(CP_UTF8);
    double x, y, otvet;
    char znak;
    std::cout << "Введите действие(+,-,*,/): ";
    std::cin >> znak;
    if (znak != '+' and znak != '-' and znak != '*' and znak != '/') {
        std::cout << "Неправильный ввод входных данных";
        return 0;
    }
    std::cout << '\n';
    std::cout << "Введите первое число: ";
    std::cin >> x;
    std::cout << '\n';
    std::cout << "Введите второе число: ";
    std::cin >> y;
    std::cout << '\n';
    if (znak == '+'){
        otvet = sum(x, y);
        std::cout << "Ответ: " << otvet << '\n';
    }
    else if (znak == '-'){
        otvet = difference(x, y);
        std::cout << "Ответ: " << otvet << '\n';
    }
    else if (znak == '*'){
        otvet = multiplication(x, y);
        std::cout << "Ответ: " << otvet << '\n';
    }
    else if (znak == '/'){
        if (y == 0) {
            std::cout << "На ноль делить нельзя!" << '\n';
            return 0;
        }
        otvet = divide(x, y);
        std::cout << "Ответ: " << otvet << '\n';
    }
}
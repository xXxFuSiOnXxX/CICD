#include <iostream>
#include <windows.h>
#include <cassert>

double sum(double a, double b) {
    return a + b;
}
double difference(double a, double b) {
    return a - b;
}
double multiplication(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}

void TestSum() {
    assert(sum(5, 7) == 12);
    assert(sum(-5, -7) == -12);
    assert(sum(-2, 0) == -2);п
    assert(sum(-5, 5) == 0);
    std::cout << "TestSum - OK" << '\n';
}
void TestDifference() {
    assert(difference(5, 7) == -2);
    assert(difference(-5, -7) == 2);
    assert(difference(-2, 0) == -2);
    assert(difference(-5, 5) == -10);
    std::cout << "TestDifference - OK" << '\n';
}
void TestMultiplication() {
    assert(multiplication(5, 7) == 35);
    assert(multiplication(-5, -7) == 35);
    assert(multiplication(-2, 0) == 0);
    assert(multiplication(-5, 5) == -25);
    std::cout << "TestMultiplication - OK" << '\n';
}
void TestDivide() {
    assert(divide(5, 10) == 0.5);
    assert(divide(10, 5) == 2);
    assert(divide(-2, -2) == 1);
    assert(divide(-5, 5) == -1);
    std::cout << "TestDivide - OK" << '\n';
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    TestSum();
    TestDifference();
    TestMultiplication();
    TestDivide();
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
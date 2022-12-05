#include <cassert>
#include "for_func.h"

void TestSum() {
    assert(sum(5, 7) == 12);
    assert(sum(-5, -7) == -12);
    assert(sum(-2, 0) == -2);
    assert(sum(-5, 5) == 0);
}
void TestDifference() {
    assert(difference(5, 7) == -2);
    assert(difference(-5, -7) == 2);
    assert(difference(-2, 0) == -2);
    assert(difference(-5, 5) == -10);
}
void TestMultiplication() {
    assert(multiplication(5, 7) == 35);
    assert(multiplication(-5, -7) == 35);
    assert(multiplication(-2, 0) == 0);
    assert(multiplication(-5, 5) == -25);
}
void TestDivide() {
    assert(divide(5, 10) == 0.5);
    assert(divide(10, 5) == 2);
    assert(divide(-2, -2) == 1);
    assert(divide(-5, 5) == -1);
}

int main() {
    TestSum();
    TestDifference();
    TestMultiplication();
    TestDivide();
}




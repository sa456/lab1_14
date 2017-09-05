#include <iostream>
#include <cstdlib>
#include <random>
#include <ctime>
#include "Rational.h"

int main() {
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> uid(1, 20);

    int a = uid(gen);
    int b = uid(gen);
    std::cout << "a = " << a << "\tb = " << b << std::endl;
    if (a > b) std::swap(a, b);

    Rational rational(a, b);
    rational.printVal();


    int a2 = uid(gen);
    int b2 = uid(gen);
    std::cout << "a = " << a2 << "\tb = " << b2 << std::endl;
    if (a2 > b2) std::swap(a2, b2);

    Rational rational2(a2, b2);
    rational2.printVal();

    std::cout << "summ:" << "\n";
    rational.add(rational2);
    rational.printVal();

    std::cout << "sub:" << "\n";
    rational.minus(rational2);
    rational.printVal();

    std::cout << "mult:" << "\n";
    rational.mult(rational2);
    rational.printVal();

    std::cout << "div:" << "\n";
    rational.div(rational2);
    rational.printVal();

    std::cout << "Is values equal? - " << rational.equal(rational2) << "\n";

    std::cout << "Is first value bigger? - " << rational.bigger(rational2) << "\n";

    return 0;
}
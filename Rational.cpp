//
// Created by rei on 05.09.2017.
//

#include <iostream>
#include "Rational.h"

Rational::Rational() {
    numerator = 0;
    denominator = 0;
    value = 0;
}

Rational::~Rational() = default;

Rational::Rational(long a, long b) {
    if (b == 0) {
        std::cout << "Zero exception";
    } else {
        value = (double) a / b;
        long g = gcd(a, b);
        numerator = a / g;
        denominator = b / g;
    }
}

long Rational::gcd(long a, long b) {
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

void Rational::printVal() {
    std::cout << "Value: " << numerator << "\\" << denominator << "\nValue with . : " << value << "\n\n";

}

void Rational::add(Rational rational) {
    long num1 = numerator;
    long den1 = denominator;
    long num2 = rational.getNumerator();
    long den2 = rational.getDenominator();

    num1 *= den2;
    den1 *= den2;
    num2 *= denominator;

    num1 += num2;

    long g = gcd(num1, den1);
    numerator = num1 / g;
    denominator = den1 / g;
    value = (double) numerator / denominator;
}

void Rational::minus(Rational rational) {
    long num1 = numerator;
    long den1 = denominator;
    long num2 = rational.getNumerator();
    long den2 = rational.getDenominator();

    num1 *= den2;
    den1 *= den2;
    num2 *= denominator;

    num1 -= num2;

    long g = gcd(num1, den1);
    numerator = num1 / g;
    denominator = den1 / g;
    value = (double) numerator / denominator;
}

void Rational::mult(Rational rational) {
    long num1 = numerator;
    long den1 = denominator;
    long num2 = rational.getNumerator();
    long den2 = rational.getDenominator();

    num1 *= num2;
    den1 *= den2;

    long g = gcd(num1, den1);
    numerator = num1 / g;
    denominator = den1 / g;
    value = (double) numerator / denominator;
}

void Rational::div(Rational rational) {
    long num1 = numerator;
    long den1 = denominator;
    long num2 = rational.getNumerator();
    long den2 = rational.getDenominator();

    num1 *= den2;
    den1 *= num2;

    long g = gcd(num1, den1);
    numerator = num1 / g;
    denominator = den1 / g;
    value = (double) numerator / denominator;
}

bool Rational::bigger(Rational rational) {
    long num1 = numerator;
    long num2 = rational.getNumerator();
    long den2 = rational.getDenominator();

    num1 *= den2;
    num2 *= denominator;

    if (num1 > num2)
        return true;
    else
        false;
}

long Rational::getNumerator() {
    return numerator;
}

long Rational::getDenominator() {
    return denominator;
}

void Rational::setNumenator(long a) {
    numerator = a;
}

void Rational::setDenominator(long a) {
    denominator = a;
}

void Rational::setValue(long a, long b) {
    value = a * 0.1 / b;
}

double Rational::getValue() {
    return value;
}

bool Rational::equal(Rational rational) {
    return numerator == rational.getNumerator() && denominator == rational.getDenominator();
}







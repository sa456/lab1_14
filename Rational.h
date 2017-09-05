//
// Created by rei on 05.09.2017.
//

#ifndef LAB1_14_RATIONAL_H
#define LAB1_14_RATIONAL_H


class Rational {
private:
    long numerator;
    long denominator;
    double value;
public:
    Rational();
    ~Rational();
    Rational(long a, long b);
    long gcd(long a, long b);
    long getNumerator();
    long getDenominator();
    void setNumenator(long a);
    void setDenominator(long a);
    void setValue(long a, long b);
    double getValue();
    void printVal();
    void add(Rational rational);
    void minus(Rational rational);
    void mult(Rational rational);
    void div(Rational rational);
    bool equal(Rational rational);
    bool bigger(Rational rational);
};

#endif //LAB1_14_RATIONAL_H

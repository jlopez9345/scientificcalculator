
#ifndef CALCULATOR_H
#define CALCULATOR_H
//Class calculator to hold all the math functions 
//the scientific calculator can perform
class Calculator {
public:
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double power(double base, double exp);
    double squareRoot(double a);
    double sine(double a);
    double cosine(double a);
    double tangent(double a);
};

#endif

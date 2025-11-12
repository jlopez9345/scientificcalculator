#include <cmath>
#include "calculator.h"
//Function definitions
// Basic arithmetic
double Calculator::add(double a, double b) { return a + b; }
double Calculator::subtract(double a, double b) { return a - b; }
double Calculator::multiply(double a, double b) { return a * b; }
double Calculator::divide(double a, double b) { return (b != 0) ? a / b : 0; }

// Scientific functions
double Calculator::power(double base, double exp) { return pow(base, exp); }
double Calculator::squareRoot(double a) { return sqrt(a); }
double Calculator::sine(double a) { return sin(a); }
double Calculator::cosine(double a) { return cos(a); }
double Calculator::tangent(double a) { return tan(a); }

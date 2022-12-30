#ifndef MATHFUNCTIONS_H
#define MATHFUNCTIONS_H

#include <cmath>
namespace calculator {

#define EXP 2.7182818284590452353602




double sqrt(const double);
    
double rt(const double, const int deg = 2);

double reciprocalFunction(const double);

long long factorial(const long long);
    
 double logarithm(const double, const double = EXP);
 
 double module(const double a);

 double sinus(double degree);


 double cosinus(double degree);
}
#endif

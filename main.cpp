#include  <iostream>
#include "mathFunctions.h"
#include "arithmeticAndLogicOperators.h"
#include <string>

using namespace::calculator;
int main() {

    std::cout << sum(34, 30) << "\n";
    std::cout << bitwiseAnd(44, 3) << "\n";
    std::cout << leftShift(1, 2, false) << "\n";
    
    int a = pow(2, 30);

    std::cout << a << "\n";
    std::cout << factorial(6) << "\n";
    std::cout << logarithm(pow(EXP,3)) << "\n";
    std::cout << reciprocalFunction(5) << "\n";
    std::cout << sqrt(8) << "\n";
    std::cout << sqrt(-1) << "\n";//не то т.к. корень из отрицательного 
    std::cout << pow(8, 0.5) << "\n";//аналогия sqrt
    std::cout << sinus(60)<<"\n";
    std::cout << cosinus(-60)<<"\n";
    std::cout << module(-60);
    return 0;
}

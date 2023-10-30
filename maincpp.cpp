#include "func.h"



int main() {
    double base;
    int exponent;

    std::cout << "Enter the basis of the degree: ";
    std::cin >> base;
    std::cout << "Enter degree indicator: ";
    std::cin >> exponent;

    double result = power(base, exponent);
    std::cout << base << " in degree " << exponent << " = " << result << std::endl;

    return 0;
}
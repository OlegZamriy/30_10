#include "func.h"



int main() {
    int number;
    std::cout << "Enter a number to calculate the factorial: ";
    std::cin >> number;

    unsigned long long result = factorial(number);
    std::cout << "Factorial " << number << " = " << result << std::endl;

    return 0;
}
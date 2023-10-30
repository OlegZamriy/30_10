#include "func.h"



int main() {
    int number;
    std::cout << "Enter a number to check if it is prime: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    }
    else {
        std::cout << number << " is a not prime number." << std::endl;
    }

    return 0;
}
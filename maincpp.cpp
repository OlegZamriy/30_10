#include "func.h"



int main() {
    int number;
    std::cout << "Enter a six-digit number: ";
    std::cin >> number;

    if (isLuckyNumber(number)) {
        std::cout << "This is a lucky number!" << std::endl;
    }
    else {
        std::cout << "This is not a lucky number." << std::endl;
    }

    return 0;
}
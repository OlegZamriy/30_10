#include "func.h"

unsigned long long factorial(int n) {
    if (n < 0) {
        std::cerr << "Factorial is defined only for non-negative integers." << std::endl;
        return 0;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

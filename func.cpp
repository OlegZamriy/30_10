#include "func.h"

bool isPositive(int number) {
    if (number > 0) {
        return true;
    }
    else if (number < 0) {
        return false;
    }
    else {
        cerr << "We enter a zero, which is neither optional nor visible." << endl;
        return false;
    }
}
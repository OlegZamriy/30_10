#include "func.h"

int sumInRange(int start, int end) {
    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}
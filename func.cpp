#include "func.h"

bool isLuckyNumber(int number) {
    if (number < 100000 || number > 999999) {
        return false;
    }

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            leftSum += number % 10;
        }
        else {
            rightSum += number % 10;
        }
        number /= 10;
    }

    return leftSum == rightSum;
}
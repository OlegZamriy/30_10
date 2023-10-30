#include "func.h"



int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int max = findMax(num1, num2);
    cout << "Highest number: " << max << endl;

    return 0;
}
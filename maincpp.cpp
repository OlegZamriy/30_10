#include "func.h"



int main() {
    double number;
    cout << "Enter number: ";
    cin >> number;

    double result = cube(number);
    cout << "Number cube " << number << " equals " << result << endl;

    return 0;
}
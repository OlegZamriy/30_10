#include "func.h"



int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (isPositive(num)) {
        cout << "The entered number is additional." << endl;
    }
    else {
        cout << "The entered number is shown as zero." << endl;
    }

    return 0;
}
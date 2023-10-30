#include "func.h"



int main() {
    int start, end;
    cout << "Enter the beginning of the interval: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}
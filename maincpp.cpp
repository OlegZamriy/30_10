#include "func.h"



int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the final number: ";
    cin >> end;

    int result = sumInRange(start, end);
    cout << "The sum of numbers in the range from " << start << " before " << end << " = " << result << endl;

    return 0;
}
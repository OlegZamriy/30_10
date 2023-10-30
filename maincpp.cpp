#include "func.h"



int main()
{
    int height, width;

    cout << "Enter hight: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    drawRectangle(height, width);

    return 0;
}
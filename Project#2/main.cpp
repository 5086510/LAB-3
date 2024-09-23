#include <iostream>
using namespace std;

int main() {
    // creates two variables, x and y, of type double;
    double x, y;

    // reads values into x and y
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter value for y: ";
    cin >> y;

    // creates two pointer variables that point to x and y, respectively;
    double *ptX = &x;
    double *ptY = &y;

    // adds the values of x and y using the pointer variables
    double sum = *ptX + *ptY;

    // displays x, y and the sum
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}


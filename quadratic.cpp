#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;    // coefficients of the quadratic equation
    double D, x1, x2;  // discriminant and roots

    cout << "Quadratic equation: ax^2 + bx + c = 0" << endl;
    cout << "Enter values for a, b, and c:" << endl;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    // Calculate the discriminant
    D = pow(b, 2) - 4 * a * c;

    if (D > 0) {
        // Two distinct real roots
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "The equation has two real roots:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        // One real root
        x1 = -b / (2 * a);
        cout << "The equation has one real root:" << endl;
        cout << "x = " << x1 << endl;
    }
    else {
        // No real roots
        cout << "The equation has no real roots!" << endl;
    }

    return 0;
}

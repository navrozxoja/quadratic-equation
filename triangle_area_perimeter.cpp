#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Calculate the area and perimeter of a triangle
    double a, b, c, p, s;
    cout << "Enter the sides of the triangle:\n";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    // Check if a triangle can be formed
    if (a + b > c && b + c > a && a + c > b) {
        p = (a + b + c) / 2; // semi-perimeter
        s = sqrt(p * (p - a) * (p - b) * (p - c)); // Heron's formula
        cout << "Area: " << s << "\n";
        cout << "Perimeter: " << p * 2;
    }
    else {
        cout << "A triangle cannot be formed with these sides!";
    }

    return 0;
}

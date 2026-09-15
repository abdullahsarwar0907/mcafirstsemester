// Problem 7. Write a C++ program to find the roots of a quadratic equation.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, D, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "It is not a quadratic equation.";
        return 0;
    }

    D = b * b - 4 * a * c;
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Roots are real and distinct, Root 1 = " << root1 << " Root 2 = " << root2 << endl;
    } else if (D == 0) {
        root1 = -b / (2 * a);
        cout << "Roots are real and equal, Root 1 = Root 2 = " << root1 << endl;
    } else {
        cout << "Roots are imaginary." << endl;
    }

    return 0;
}

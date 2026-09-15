// Problem 3. Write a C++ program to evaluate the arithmetic expression
// ((a + b / c * d - e) * (f - g)).
// Read the values a, b, c, d, e, f, g from the standard input device.
#include <iostream>
using namespace std;
int main() {
    double a, b, c, d, e, f, g, result;
    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    result = ((a + b / c * d - e) * (f - g));
    cout << "Result = " << result;

    return 0;
}


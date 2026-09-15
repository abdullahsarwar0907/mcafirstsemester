// Problem 1. Write a C++ program to check whether a number is even or odd
// using ternary operator.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    (n % 2 == 0) ? cout << "Even" : cout << "Odd";

    return 0;
}


// Problem 2. Write a C++ program to perform the addition of two numbers
// without using + operator.

#include <iostream>
using namespace std;

int main()
{
    int a, b, sum;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    sum = a - (-b);

    cout << "Sum = " << sum;

    return 0;
}


// Problem 3. Write a C++ program to evaluate the arithmetic expression
// ((a + b / c * d - e) * (f - g)).
// Read the values a, b, c, d, e, f, g from the standard input device.

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, g, result;

    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    result = ((a + b / c * d - e) * (f - g));

    cout << "Result = " << result;

    return 0;
}


// Problem 4. A Fibonacci sequence is defined as follows: The first and
// second terms in the sequence are 0 and 1. Subsequent terms are found by
// adding the preceding two terms in the sequence. Write a C++ program to
// generate the first n terms of the sequence.

#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Sequence: ";

    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}


// Problem 5. Write a C++ program to generate all the prime numbers between
// 1 and n, where n is a value supplied by the user.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";

    for (int i = 2; i <= n; i++)
    {
        bool prime = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}


// Problem 6. A character is entered through keyboard. Write a C++ program
// to determine whether the character entered is a capital letter, a small
// case letter, a digit or a special symbol using if-else and switch case.
// The following table shows the range of ASCII values for various characters.
// Characters ASCII values:
// A-Z: 65-90
// a-z: 97-122
// 0-9: 48-57
// Special symbols: 0-47, 58-64, 91-96, 123-127

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    int ascii = (int)ch;

    if (ascii >= 65 && ascii <= 90)
        cout << "Capital letter";
    else if (ascii >= 97 && ascii <= 122)
        cout << "Small case letter";
    else if (ascii >= 48 && ascii <= 57)
        cout << "Digit";
    else
        cout << "Special symbol";

    return 0;
}


// Problem 6 (Using switch case). Determine whether the character entered
// is a capital letter, a small case letter, a digit or a special symbol.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int ascii;

    cout << "Enter a character: ";
    cin >> ch;

    ascii = (int)ch;

    switch (ascii)
    {
        case 65 ... 90:
            cout << "Capital letter";
            break;

        case 97 ... 122:
            cout << "Small case letter";
            break;

        case 48 ... 57:
            cout << "Digit";
            break;

        default:
            cout << "Special symbol";
    }

    return 0;
}


// Problem 7. Write a C++ program to find the roots of a quadratic equation.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, discriminant, root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "It is not a quadratic equation.";
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);

        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex and imaginary." << endl;
        cout << "Root 1 = " << realPart << " + "
             << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - "
             << imaginaryPart << "i" << endl;
    }

    return 0;
}


// Problem 8. Write a C++ program to check whether a given 3-digit number
// is an Armstrong number.

#include <iostream>
using namespace std;

int main()
{
    int n, original, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> n;

    if (n < 100 || n > 999)
    {
        cout << "Please enter a 3-digit number.";
        return 0;
    }

    original = n;

    while (n != 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}

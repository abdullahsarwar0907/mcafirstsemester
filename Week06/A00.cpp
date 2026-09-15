#include <iostream>
#include <cstring>
using namespace std;


// ================================================================
// Problem 1. Write a C++ Program to Add Two Numbers Using a Pointer.
// ================================================================

void problem1()
{
    int a, b, sum;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    cout << "Sum = " << sum << endl;
}


// ================================================================
// Problem 2. Write a C++ Example Program for swapping numbers
// Using Pointers.
// ================================================================

void problem2()
{
    int a, b, temp;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}


// ================================================================
// Problem 3. Write a C++ Program to print the address of the
// Variable Using a Pointer.
// ================================================================

void problem3()
{
    int num;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value of variable = " << num << endl;
    cout << "Address of variable = " << ptr << endl;
}


// ================================================================
// Problem 4. Write a C++ Program for Increment and Decrement
// an Integer Using a Pointer.
// ================================================================

void problem4()
{
    int num;
    int *ptr;

    cout << "Enter an integer: ";
    cin >> num;

    ptr = &num;

    cout << "Original value = " << *ptr << endl;

    (*ptr)++;
    cout << "After increment = " << *ptr << endl;

    (*ptr)--;
    cout << "After decrement = " << *ptr << endl;
}


// ================================================================
// Problem 5. Write a C++ Program to Print a String Using a Pointer.
// ================================================================

void problem5()
{
    char str[100];
    char *ptr;

    cout << "Enter a string: ";
    cin >> str;

    ptr = str;

    cout << "String using pointer: ";

    while (*ptr != '\0')
    {
        cout << *ptr;
        ptr++;
    }

    cout << endl;
}


// ================================================================
// Problem 6. Write a C++ program to concatenate two strings
// using pointers.
// ================================================================

void problem6()
{
    char str1[200], str2[100];
    char *p1, *p2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    p1 = str1;
    p2 = str2;

    // Move p1 to the end of the first string
    while (*p1 != '\0')
    {
        p1++;
    }

    // Copy the second string to the end of the first string
    while (*p2 != '\0')
    {
        *p1 = *p2;
        p1++;
        p2++;
    }

    // Add null character at the end
    *p1 = '\0';

    cout << "Concatenated string = " << str1 << endl;
}


// ================================================================
// Problem 7. Write a program for reading elements using a pointer
// into an array and display the values using an array.
//
// i. Declare a set of elements.
//
// ii. Declare the pointer and initialize it to the first element’s
// address of a set of elements(array).
//
// iii. Repeat the loop until the pointer reaches to the last element
// and displays each element.
// ================================================================

void problem7()
{
    int arr[5];
    int *ptr;

    cout << "Enter 5 elements:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Initialize pointer to the first element
    ptr = arr;

    cout << "Elements are: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }

    cout << endl;
}


// ================================================================
// Problem 8. Write a program using a pointer variable to the sum
// of n elements from the array.
// ================================================================

void problem8()
{
    int n;
    int arr[100];
    int *ptr;
    int sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ptr = arr;

    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    cout << "Sum of array elements = " << sum << endl;
}


// ================================================================
// Problem 9. Write a program for reading elements using a pointer
// into the array and display the values using an array.
// ================================================================

void problem9()
{
    int n;
    int arr[100];
    int *ptr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;

    // Initialize pointer to the first element of the array
    ptr = arr;

    // Read elements using pointer
    for (int i = 0; i < n; i++)
    {
        cin >> *ptr;
        ptr++;
    }

    // Display elements using array
    cout << "Elements of the array are: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}


// ================================================================
// Problem 10. Write a C++ program to reverse a string using pointers.
// ================================================================

void problem10()
{
    char str[100];
    char *start, *end;
    char temp;

    cout << "Enter a string: ";
    cin >> str;

    start = str;
    end = str;

    // Move end pointer to the last character
    while (*end != '\0')
    {
        end++;
    }

    end--;

    // Reverse the string using pointers
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed string = " << str << endl;
}


// ================================================================
// MAIN FUNCTION
// ================================================================

int main()
{
    int choice;

    cout << "==========================================" << endl;
    cout << "          POINTER PROGRAMS IN C++" << endl;
    cout << "==========================================" << endl;

    cout << "\n1. Add Two Numbers Using a Pointer";
    cout << "\n2. Swap Numbers Using Pointers";
    cout << "\n3. Print Address of a Variable Using a Pointer";
    cout << "\n4. Increment and Decrement an Integer Using a Pointer";
    cout << "\n5. Print a String Using a Pointer";
    cout << "\n6. Concatenate Two Strings Using Pointers";
    cout << "\n7. Read and Display Array Elements Using a Pointer";
    cout << "\n8. Find Sum of n Array Elements Using a Pointer";
    cout << "\n9. Read Array Elements Using a Pointer and Display Using Array";
    cout << "\n10. Reverse a String Using Pointers";

    cout << "\n\nEnter your choice (1-10): ";
    cin >> choice;

    cout << "\n------------------------------------------" << endl;

    switch (choice)
    {
        case 1:
            problem1();
            break;

        case 2:
            problem2();
            break;

        case 3:
            problem3();
            break;

        case 4:
            problem4();
            break;

        case 5:
            problem5();
            break;

        case 6:
            problem6();
            break;

        case 7:
            problem7();
            break;

        case 8:
            problem8();
            break;

        case 9:
            problem9();
            break;

        case 10:
            problem10();
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

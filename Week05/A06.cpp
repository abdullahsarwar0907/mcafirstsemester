// Problem 6. Write a C++ program to perform the following:
// a. Addition of two square matrices
// b. Multiplication of two square matrices
#include <iostream>
using namespace std;
int main() {
    int n;
    int A[10][10], B[10][10], S[10][10], M[10][10];

    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter first matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter second matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = 0;
            for (int k = 0; k < n; k++) {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }

	cout << "Addition of matrices:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Multiplication of matrices:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


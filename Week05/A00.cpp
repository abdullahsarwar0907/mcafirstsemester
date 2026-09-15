// Problem 1. Write a C++ program to enter elements in the array
// and display the array elements.

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}


/*
Problem 2. Write a C++ program to find the sum of all the
array elements.
*/

int main()
{
    int n, arr[100], sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum;

    return 0;
}


/*
Problem 3. Write a C++ program to find the length of the array.
*/

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Length of array = " << n;

    return 0;
}


/*
Problem 4. Write a C++ program to find the second-largest integer
in a list of integers.
*/

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest = " << secondLargest;

    return 0;
}


/*
Problem 5. Write a C++ Program to reverse the position of the
array element (Hint: First element to the last element.)
*/

int main()
{
    int n, arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Reversed array: ";
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}


/*
Problem 6. Write a C++ program to perform the following:
a. Addition of two matrices
b. Multiplication of two matrices
*/


/*
Solution 6(a): Addition of two matrices
*/

int main()
{
    int r, c;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter first matrix: ";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter second matrix: ";
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            cin >> B[i][j];

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Addition of matrices:\n";

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }

    return 0;
}


/*
Solution 6(b): Multiplication of two matrices
*/

int main()
{
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10] = {0};

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    cout << "Enter first matrix: ";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter second matrix: ";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            for(int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "Multiplication of matrices:\n";

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            cout << C[i][j] << " ";

        cout << endl;
    }

    return 0;
}


/*
Problem 7. Write a C++ program to count and display positive,
negative, odd, and even numbers in an array.
*/

int main()
{
    int n, arr[100];
    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive numbers = " << positive << endl;
    cout << "Negative numbers = " << negative << endl;
    cout << "Odd numbers = " << odd << endl;
    cout << "Even numbers = " << even << endl;

    return 0;
}


/*
Problem 8. Write a C++ program to merge two sorted arrays into
another array in sorted order.
*/

int main()
{
    int n, m;
    int A[100], B[100], C[200];

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter first sorted array: ";
    for(int i = 0; i < n; i++)
        cin >> A[i];

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter second sorted array: ";
    for(int i = 0; i < m; i++)
        cin >> B[i];

    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
    {
        if(A[i] <= B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while(i < n)
        C[k++] = A[i++];

    while(j < m)
        C[k++] = B[j++];

    cout << "Merged sorted array: ";

    for(int i = 0; i < k; i++)
        cout << C[i] << " ";

    return 0;
}


/*
Problem 9. Write a C++ program to find the frequency of a
particular number in a list of integers.
*/

int main()
{
    int n, arr[100], num;
    int frequency = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to find frequency: ";
    cin >> num;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == num)
            frequency++;
    }

    cout << "Frequency of " << num << " = " << frequency;

    return 0;
}
```


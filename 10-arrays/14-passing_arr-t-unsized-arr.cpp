// C++ program to demonstrate the passing of array as
// unsized array.

#include <iostream>
using namespace std;

// function to update array elements
void printarray(int a[],int size)
{
    for (int i = 0; i < size; i++)
        a[i] = a[i] + 5;
}

int main()
{
    // array creation
    int a[5] = { 1, 2, 3, 4, 5 };
    int n=5;
    printarray(a,n); // Passing array to function

    // printing array elements
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

/*
--OUTPUT-- 
6 7 8 9 10
*/
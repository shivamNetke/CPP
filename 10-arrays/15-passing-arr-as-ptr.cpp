// C++ program to demonstratethe passing of array by
// pointer.

#include <iostream>
using namespace std;

// function to print array elements
void printarray(int* a)
{
    for (int i = 0; i < 5; i++)
        *(a + i) = *(a + i) + 5;
        // *(a + i) = *(a + i);
}

int main()
{
    // array creation
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}

/*
--OUTPUT-- 
6 7 8 9 10 
*/
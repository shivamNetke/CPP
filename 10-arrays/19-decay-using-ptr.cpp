// C++ code to demonstrate array decay
#include <iostream>
using namespace std;

// Function to show that array decay happens
// even if we use pointer
void pDecay(int (*p)[7])
{
    // Printing size of array
    cout << "Modified size of array by "
            "passing by pointer: ";
    cout << sizeof(p) << endl;
}

int main()
{
    int a[7] = { 1, 2, 3, 4, 5, 6, 7 };

    // Printing original size of array
    cout << "Actual size of array is: ";
    cout << sizeof(a) << endl;

    // Passing a pointer to array
    pDecay(&a);

    return 0;
}


/*
--OUTPUT-- 
Actual size of array is: 28
Modified size of array by passing by pointer: 4
*/
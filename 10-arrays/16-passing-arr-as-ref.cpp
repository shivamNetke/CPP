// C++ to demonstrate array passing by pass by reference
#include <iostream>
using namespace std;

void modifyArray(int (&arr)[5])
{
  // deducing size
  int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    modifyArray(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
--OUTPUT-- 
2 4 6 8 10 
*/
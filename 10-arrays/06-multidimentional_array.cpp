// c++ program to illustrate the two dimensional array
#include <iostream>
using namespace std;

int main()
{

    int count = 1;
  
    // Declaring 2D array
    int array1[3][4];

    // Initialize 2D array using loop
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            array1[i][j] = count;
            count++;
        }
    }

    // Printing the element of 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
--OUTPUT-- 
1 2 3 4
5 6 7 8
9 10 11 12

*/
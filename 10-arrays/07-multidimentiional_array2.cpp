// C++ program to illustrate the 3d array
#include <iostream>
using namespace std;

int main()
{

    int count = 0;
    // declaring 3d array
    int x[2][2][3];

    // initializing the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                x[i][j][k] = count;
                count++;
            }
        }
    }

    // printing the array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                printf("x[%d][%d][%d] = %d \n", i, j, k,
                       x[i][j][k]);
                count++;
            }
        }
    }

    return 0;
}
/*
x[0][0][0] = 0 
x[0][0][1] = 1  
x[0][0][2] = 2  
x[0][1][0] = 3  
x[0][1][1] = 4  
x[0][1][2] = 5  
x[1][0][0] = 6  
x[1][0][1] = 7  
x[1][0][2] = 8  
x[1][1][0] = 9  
x[1][1][1] = 10 
x[1][1][2] = 11
*/
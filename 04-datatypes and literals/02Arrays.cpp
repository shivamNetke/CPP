#include<iostream>
using namespace std;
int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};  // array derived type
    arr[0] = 5;
    arr[2] = -10;
    arr[3] = arr[0];

    for(int i = 0; i<5; i++)  // printing the data
        printf(" %d ", arr[i]);

    return 0;
}
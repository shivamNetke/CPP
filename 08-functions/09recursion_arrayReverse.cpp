#include<iostream>
using namespace std;

void pArray(int *arr, int n)
{
    if(n == 0)  // Correct base condition
    {
        return;
    }
    cout << arr[n-1] << ' ';  // Print the element
    pArray(arr, n-1);  // Recursive call
}

int main(void)
{
    // Declaring array
    int arr[5] = {1, 2, 3, 4, 5};

    // Calling function
    pArray(arr, 5);
    
    return 0;
}

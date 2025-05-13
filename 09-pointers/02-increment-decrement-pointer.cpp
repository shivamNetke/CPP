#include <iostream>
using namespace std;

int main() {

    int n = 27;
    
    int* ptr = &n;

    cout << "Size of int: " << sizeof(int) << endl;

    cout << "Before Increment: " << int (ptr) << endl;
    
    ptr++;
    cout << "After Increment: " <<int (ptr) << endl;

    cout << "Before Decrement: " << int (ptr)  << endl;
    
    ptr--;
    cout << "After Decrement: " << int (ptr) ;

    return 0;
}
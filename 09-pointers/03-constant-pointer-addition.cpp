// CPP program to demonstrate the addition of a constant to
// a pointer
#include <iostream>
using namespace std;

int main()
{

    int n = 20;
    int* ptr = &n;

    cout << "Address stored in ptr: " << int(ptr) << endl;

    ptr = ptr + 1;
    cout << "Adding 1 to ptr: " << int(ptr) << endl;

    ptr = ptr + 2;
    cout << "Adding 2 to ptr: " << int(ptr);

    return 0;
}
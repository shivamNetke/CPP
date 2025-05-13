#include <iostream>
using namespace std;

int main()
{

    int n = 100;

    int* ptr = &n;

    cout << "Address stored in ptr: " << int(ptr) << endl;

    ptr = ptr - 1;
    cout << "Subtract 1 from ptr: " << int(ptr)<<endl;

    ptr = ptr - 3;
    cout << "Subtract 3 from ptr: " << int(ptr)<<endl;

    return 0;
}
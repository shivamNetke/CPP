#include <iostream>
using namespace std;
int main(void)
{
    int n = 10;
    int* nptr = &n; // store the address of number in nptr

    char* charptr = reinterpret_cast<char*>(nptr); // reinterpreting the pointer as a char pointer

    // printing the memory addresses and values
    cout<<"integer address : "<<nptr<<endl;
    cout<<"char address : "<<charptr;

    return 0;
}
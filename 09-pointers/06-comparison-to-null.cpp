#include <iostream>
using namespace std;

int main() {
    int n = 10;
  
    int* ptr = NULL;
    ptr = &n;

    if (ptr == NULL) {
        cout << "No value is pointed";
    }
    else {
        cout << *ptr;
    }
    return 0;
}
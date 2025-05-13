#include <iostream>

void modifyPointer(int* &ptr) {  // Reference to a pointer
    static int y = 20;
    ptr = &y;
}

int main() {
    int x = 10;
    int* p = &x;

    modifyPointer(p);  // p now points to y

    std::cout << "Value pointed by p: " << *p << std::endl;
    return 0;
}
#include <iostream>

void modify(int &x) {  // Function receives reference to x
    x = x * 2;
}

int main() {
    int num = 10;
    modify(num);  // num is modified directly
    std::cout << "After function call, num = " << num << std::endl;
    return 0;
}
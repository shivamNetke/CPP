#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int (&refArr)[3] = arr;  // Reference to an array

    refArr[1] = 99;  // Modifies arr[1]

    std::cout << "arr[1] = " << arr[1] << std::endl;
    return 0;
}
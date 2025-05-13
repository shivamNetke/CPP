#include <iostream>
using namespace std;

int main(void) {
    int x = 7;
    try {
        if (x % 2 != 0) {
            
            // Throwing int
            throw -1;
        }
    }
    
    // Catching int
    catch (int e) {
        cout << "Exception Caught: " << e;
    }
    return 0;
}
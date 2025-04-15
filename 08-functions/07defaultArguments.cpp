#include <iostream>
using namespace std;

// Function with an argument with default value
void f(int a = 10) {
    cout << a << endl;
}

int main() {
      
      // Uses default argument
      f();
  
      // Uses passed value
      f(221);
  
    return 0;
}

// template function

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Int: " << add(5, 3) << endl;
    cout << "Float: " << add(2.5f, 1.5f) << endl;
    cout << "Double: " << add(2.7, 3.1) << endl;
    return 0;
}
// --OUTPUT-- 
// Int: 8     
// Float: 4   
// Double: 5.8
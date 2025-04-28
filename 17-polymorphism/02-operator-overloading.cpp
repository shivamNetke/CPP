#include <iostream>
using namespace std;

class Complex {
public:
    float realPart;
    float imaginaryPart;

    Complex(float r = 0, float i = 0) {
        realPart = r;
        imaginaryPart = i;
    }

    Complex add(Complex other) {
        Complex temp;
        temp.realPart = realPart + other.realPart;
        temp.imaginaryPart = imaginaryPart + other.imaginaryPart;
        return temp;
    }
};

int main() {
    Complex number1(2, 3);
    Complex number2(1, 4);

    Complex sum = number1.add(number2);

    cout << "Sum = " << sum.realPart << " + " << sum.imaginaryPart << "i" << endl;

    return 0;
}

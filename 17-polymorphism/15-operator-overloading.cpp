#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        cout<<"in complex constructor // Complex(int r = 0, int i = 0)"<<endl;
        real = r;
        imag = i;
        cout<<"out complex constructor // Complex(int r = 0, int i = 0)"<<endl;
    }

    Complex operator + (Complex const& obj)
    {
        cout<<"in complex operator constructor // Complex operator+(Complex const& obj)"<<endl;
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        cout<<"out complex operator constructor // Complex operator+(Complex const& obj)"<<endl;
        return res;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
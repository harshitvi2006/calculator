#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3);
    Complex c2(2, 4);

    Complex c3 = c1 + c2;  // Operator overloading in action

    cout << "Result: ";
    c3.display();

    return 0;
}
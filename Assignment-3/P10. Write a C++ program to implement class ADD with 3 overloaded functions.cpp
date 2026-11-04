
#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
};

class ADD
{
public:
    // First overloaded function: Add two integers
    int add(int a, int b)
    {
        return a + b;
    }

    // Second overloaded function: Add two floats and one integer
    float add(float a, float b, int c)
    {
        return a + b + c;
    }

    // Third overloaded function: Add two complex numbers
    Complex add(Complex c1, Complex c2)
    {
        Complex temp;

        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;

        return temp;
    }
};

int main()
{
    ADD obj;

    cout << "Addition of two integers: ";
    cout << obj.add(10, 20) << endl;

    cout << "Addition of two floats and one integer: ";
    cout << obj.add(10.5f, 20.5f, 5) << endl;

    Complex c1(4, 5), c2(3, 2);

    Complex c3 = obj.add(c1, c2);

    cout << "Addition of two complex numbers: ";
    cout << c3.real << " + " << c3.imag << "i" << endl;

    return 0;
}

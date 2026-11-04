
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    // Parameterized constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c)
    {
        real = c.real;
        imag = c.imag;
    }

    Complex add(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex subtract(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex multiply(Complex c)
    {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }

    Complex divide(Complex c)
    {
        float denominator = c.real * c.real + c.imag * c.imag;

        if (denominator == 0)
        {
            cout << "Division by zero is not possible!" << endl;
            return Complex();
        }

        return Complex((real * c.real + imag * c.imag) / denominator,
                       (imag * c.real - real * c.imag) / denominator);
    }

    void display()
    {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main()
{
    Complex c1(5, 3), c2(2, 1), c3;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    c3 = c1.add(c2);
    cout << "Addition: ";
    c3.display();

    c3 = c1.subtract(c2);
    cout << "Subtraction: ";
    c3.display();

    c3 = c1.multiply(c2);
    cout << "Multiplication: ";
    c3.display();

    c3 = c1.divide(c2);
    cout << "Division: ";
    c3.display();

    return 0;
}


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

    // Overload + operator
    Complex operator+(const Complex &c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator
    Complex operator-(const Complex &c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload * operator
    Complex operator*(const Complex &c)
    {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    // Overload / operator
    Complex operator/(const Complex &c)
    {
        float den = c.real * c.real + c.imag * c.imag;

        if (den == 0)
        {
            cout << "Division by zero is not possible!" << endl;
            return Complex();
        }

        return Complex(
            (real * c.real + imag * c.imag) / den,
            (imag * c.real - real * c.imag) / den
        );
    }

    // Display complex number
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
    Complex a(5, 3);
    Complex b(2, 1);
    Complex c(3, 2);
    Complex d(4, 2);

    cout << "A = ";
    a.display();

    cout << "B = ";
    b.display();

    cout << "C = ";
    c.display();

    cout << "D = ";
    d.display();

    cout << "\nAddition (a + b): ";
    (a + b).display();

    cout << "Subtraction (a - b): ";
    (a - b).display();

    cout << "Multiplication (b * c): ";
    (b * c).display();

    cout << "Division (a / b): ";
    (a / b).display();

    // Expression: a - b*c + d
    Complex result = a - b * c + d;

    cout << "\nResult of a - b*c + d = ";
    result.display();

    return 0;
}

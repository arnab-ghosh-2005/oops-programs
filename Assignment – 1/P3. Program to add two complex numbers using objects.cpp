
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "Enter second complex number:" << endl;
    c2.getData();

    c3 = c1.add(c2);

    cout << "Sum of two complex numbers = ";
    c3.display();

    return 0;
}

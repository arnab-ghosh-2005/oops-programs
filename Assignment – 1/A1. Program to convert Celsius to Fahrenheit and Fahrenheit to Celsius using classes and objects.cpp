
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius
{
    float temp;

public:
    void getData()
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
    }

    float Fahrenheit()
    {
        return (temp * 9.0 / 5.0) + 32;
    }
};

class Fahrenheit
{
    float temp;

public:
    void getData()
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
    }

    float Celsius()
    {
        return (temp - 32) * 5.0 / 9.0;
    }
};

int main()
{
    Celsius c;
    Fahrenheit f;

    c.getData();
    cout << "Temperature in Fahrenheit = " << c.Fahrenheit() << endl;

    f.getData();
    cout << "Temperature in Celsius = " << f.Celsius() << endl;

    return 0;
}

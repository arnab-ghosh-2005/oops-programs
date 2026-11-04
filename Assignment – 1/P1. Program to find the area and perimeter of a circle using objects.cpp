
#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void getData()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }
};

int main()
{
    Circle c;
    c.getData();
    c.calculate();

    return 0;
}

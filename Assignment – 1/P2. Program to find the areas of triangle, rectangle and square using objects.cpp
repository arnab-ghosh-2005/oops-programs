
#include <iostream>
using namespace std;

class Area
{
    float base, height, length, breadth, side;

public:
    void getData()
    {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;

        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;

        cout << "Enter side of square: ";
        cin >> side;
    }

    void calculate()
    {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
        cout << "Area of Rectangle = " << length * breadth << endl;
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Area a;
    a.getData();
    a.calculate();

    return 0;
}

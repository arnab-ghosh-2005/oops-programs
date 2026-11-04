
#include <iostream>
using namespace std;

class HEIGHT
{
    int feet, inches;

public:
    // Constructor
    HEIGHT(int f = 0, int i = 0)
    {
        feet = f + i / 12;
        inches = i % 12;
    }

    // Convert height into centimetres
    float into_cm()
    {
        return feet * 30.48 + inches * 2.54;
    }

    // Overload - operator
    HEIGHT operator-(HEIGHT h)
    {
        int h1 = feet * 12 + inches;
        int h2 = h.feet * 12 + h.inches;

        int diff = h1 - h2;

        if (diff < 0)
            diff = -diff;

        return HEIGHT(diff / 12, diff % 12);
    }

    // Overload < operator
    bool operator<(HEIGHT h)
    {
        return into_cm() < h.into_cm();
    }

    // Overload == operator
    bool operator==(HEIGHT h)
    {
        return into_cm() == h.into_cm();
    }

    // Display height
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    HEIGHT h1(5, 6);
    HEIGHT h2(5, 2);
    HEIGHT h3;

    cout << "First Student Height: ";
    h1.display();
    cout << endl;

    cout << "Second Student Height: ";
    h2.display();
    cout << endl;

    cout << "\nFirst Height in CM: " << h1.into_cm() << " cm";
    cout << "\nSecond Height in CM: " << h2.into_cm() << " cm";

    // Difference of two heights
    h3 = h1 - h2;

    cout << "\n\nDifference between heights: ";
    h3.display();

    // Compare heights
    if (h1 < h2)
        cout << "\nFirst student is shorter.";
    else
        cout << "\nFirst student is taller or equal.";

    if (h1 == h2)
        cout << "\nBoth students have equal heights.";
    else
        cout << "\nBoth students have different heights.";

    cout << endl;

    return 0;
}

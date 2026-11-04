
#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    // Initialize time
    void initialize(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Display time
    void display()
    {
        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }

    // Add two time objects
    Time add(Time t)
    {
        Time temp;

        temp.seconds = seconds + t.seconds;
        temp.minutes = minutes + t.minutes + temp.seconds / 60;
        temp.seconds = temp.seconds % 60;

        temp.hours = hours + t.hours + temp.minutes / 60;
        temp.minutes = temp.minutes % 60;

        return temp;
    }

    // Subtract two time objects
    Time subtract(Time t)
    {
        Time temp;

        int total1 = hours * 3600 + minutes * 60 + seconds;
        int total2 = t.hours * 3600 + t.minutes * 60 + t.seconds;

        int diff = total1 - total2;

        if (diff < 0)
            diff = -diff;

        temp.hours = diff / 3600;
        temp.minutes = (diff % 3600) / 60;
        temp.seconds = diff % 60;

        return temp;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.initialize(2, 45, 50);
    t2.initialize(1, 30, 25);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    t3 = t1.add(t2);
    cout << "Addition: ";
    t3.display();

    t3 = t1.subtract(t2);
    cout << "Subtraction: ";
    t3.display();

    return 0;
}

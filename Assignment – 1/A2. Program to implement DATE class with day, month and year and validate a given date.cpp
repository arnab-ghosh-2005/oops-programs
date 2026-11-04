
#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    void getDate()
    {
        cout << "Enter day: ";
        cin >> day;

        cout << "Enter month: ";
        cin >> month;

        cout << "Enter year: ";
        cin >> year;
    }

    bool isLeapYear()
    {
        if (year % 400 == 0)
            return true;
        else if (year % 100 == 0)
            return false;
        else if (year % 4 == 0)
            return true;
        else
            return false;
    }

    bool validateDate()
    {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        if (isLeapYear())
            daysInMonth[1] = 29;

        if (day > daysInMonth[month - 1])
            return false;

        return true;
    }

    void display()
    {
        if (validateDate())
            cout << "Valid Date";
        else
            cout << "Invalid Date";
    }
};

int main()
{
    Date d;

    d.getDate();
    d.display();

    return 0;
}

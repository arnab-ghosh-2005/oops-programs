
#include <iostream>
using namespace std;

class Employee
{
    int empid;
    float bonus, overtime;

public:
    // Set parameters without arguments
    void setpara()
    {
        cout << "Enter Employee ID: ";
        cin >> empid;

        cout << "Enter Total Bonus: ";
        cin >> bonus;

        cout << "Enter Total Overtime: ";
        cin >> overtime;
    }

    // Set parameters with arguments
    void setpara(int id, float b, float o)
    {
        empid = id;
        bonus = b;
        overtime = o;
    }

    // Display report without arguments
    void displayreport()
    {
        cout << "\nEmployee ID: " << empid << endl;
        cout << "Total Bonus: " << bonus << endl;
        cout << "Total Overtime: " << overtime << endl;
    }

    // Display report with parameter
    void displayreport(int id)
    {
        if (empid == id)
        {
            displayreport();
        }
    }
};

int main()
{
    Employee e1, e2, e3, e4;

    // Setting employee details using arguments
    e1.setpara(101, 5000, 20);
    e2.setpara(102, 6000, 25);

    // Setting employee details without arguments
    cout << "\nEnter details of Employee 3:\n";
    e3.setpara();

    cout << "\nEnter details of Employee 4:\n";
    e4.setpara();

    // Display all employee reports
    cout << "\n========== ALL EMPLOYEE REPORTS ==========";

    e1.displayreport();
    e2.displayreport();
    e3.displayreport();
    e4.displayreport();

    // Display report according to employee ID
    int id;

    cout << "\nEnter Employee ID to display a particular report: ";
    cin >> id;

    cout << "\n========== SEARCHED EMPLOYEE REPORT ==========" << endl;

    e1.displayreport(id);
    e2.displayreport(id);
    e3.displayreport(id);
    e4.displayreport(id);

    return 0;
}

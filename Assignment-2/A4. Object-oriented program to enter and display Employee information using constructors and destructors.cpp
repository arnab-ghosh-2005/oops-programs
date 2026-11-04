
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string *name;
    int *age;
    string *department;
    float *salary;

public:
    // Constructor with dynamic memory allocation
    Employee(string n, int a, string d, float s)
    {
        name = new string(n);
        age = new int(a);
        department = new string(d);
        salary = new float(s);
    }

    void display()
    {
        cout << "\nEmployee Details:" << endl;
        cout << "Name: " << *name << endl;
        cout << "Age: " << *age << endl;
        cout << "Department: " << *department << endl;
        cout << "Salary: " << *salary << endl;
    }

    // Destructor
    ~Employee()
    {
        delete name;
        delete age;
        delete department;
        delete salary;
    }
};

int main()
{
    // Static initialization of objects
    Employee e1("Rahul", 22, "Computer Science", 25000);
    e1.display();

    // Dynamic initialization of object
    Employee *e2 = new Employee("Amit", 24, "IT", 30000);
    e2->display();

    // Deallocate dynamically created object
    delete e2;

    return 0;
}

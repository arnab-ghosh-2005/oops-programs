
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;

public:
    // Dynamic constructor
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor
    String(const String &s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Merge two strings
    String merge(String s)
    {
        char *temp = new char[strlen(str) + strlen(s.str) + 1];

        strcpy(temp, str);
        strcat(temp, s.str);

        String result(temp);

        delete[] temp;
        return result;
    }

    void display()
    {
        cout << str << endl;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s1("Hello ");
    String s2("World");

    cout << "First String: ";
    s1.display();

    cout << "Second String: ";
    s2.display();

    String s3 = s1.merge(s2);

    cout << "Merged String: ";
    s3.display();

    return 0;
}

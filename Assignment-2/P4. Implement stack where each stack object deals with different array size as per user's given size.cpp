
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size, top;

public:
    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << "Popped element: " << arr[top--] << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }

    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    int n;
    cout << "Enter stack size: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid stack size!";
        return 0;
    }

    Stack s(n);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    s.pop();
    s.display();

    return 0;
}

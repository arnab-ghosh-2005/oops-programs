
#include <iostream>
using namespace std;

class Matrix
{
    int **a;
    int rlimit, climit;

public:
    // Dynamic constructor
    Matrix(int r, int c)
    {
        rlimit = r;
        climit = c;

        a = new int*[rlimit];

        for (int i = 0; i < rlimit; i++)
            a[i] = new int[climit];
    }

    // Copy constructor
    Matrix(const Matrix &m)
    {
        rlimit = m.rlimit;
        climit = m.climit;

        a = new int*[rlimit];

        for (int i = 0; i < rlimit; i++)
        {
            a[i] = new int[climit];

            for (int j = 0; j < climit; j++)
                a[i][j] = m.a[i][j];
        }
    }

    void getData()
    {
        cout << "Enter matrix elements:" << endl;

        for (int i = 0; i < rlimit; i++)
        {
            for (int j = 0; j < climit; j++)
                cin >> a[i][j];
        }
    }

    void display()
    {
        for (int i = 0; i < rlimit; i++)
        {
            for (int j = 0; j < climit; j++)
                cout << a[i][j] << " ";

            cout << endl;
        }
    }

    Matrix add(Matrix &m)
    {
        Matrix temp(rlimit, climit);

        if (rlimit != m.rlimit || climit != m.climit)
        {
            cout << "Matrix addition is not possible!" << endl;
            return temp;
        }

        for (int i = 0; i < rlimit; i++)
        {
            for (int j = 0; j < climit; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        }

        return temp;
    }

    // Destructor
    ~Matrix()
    {
        for (int i = 0; i < rlimit; i++)
            delete[] a[i];

        delete[] a;
    }
};

int main()
{
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    if (r <= 0 || c <= 0)
    {
        cout << "Invalid matrix size!";
        return 0;
    }

    Matrix m1(r, c), m2(r, c);

    cout << "Enter first matrix:" << endl;
    m1.getData();

    cout << "Enter second matrix:" << endl;
    m2.getData();

    cout << "First Matrix:" << endl;
    m1.display();

    cout << "Second Matrix:" << endl;
    m2.display();

    Matrix m3 = m1.add(m2);

    cout << "Sum of Matrices:" << endl;
    m3.display();

    return 0;
}

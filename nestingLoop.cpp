// // DECLARE INSIDE

#include <iostream>
using namespace std;

class user
{
public:
    int a, b, c;
    user()
    {
        cout << "Enter the value of A:";
        cin >> a;

        cout << "Enter the value of B:";
        cin >> b;

        cout << "Enter the value of C:";

        cin >> c;
    }

    void sum()
    {

        cout << "first addition " << c << endl;
    }

    void minus()
    {

        cout << "second Multiply " << a * c << endl;
    }
    cout << "third subtract " << b - c << endl;
}

void
getvalue()
{
    if (a > c)
    {
        cout << "value B  " << b * a;
    }
    else if (a > b && c < b)
    {
        cout << "value D  " << a / c << endl;
    }
    else if (a >= b && b >= c)
    {
        cout << "Value E  " << a * b << endl;
    }
    else if (a > c || c > b)
    {

        cout << "value D " << a + c << endl;
    }

    else
    {
        cout << "Value Total: " << b + c + a << endl;
    }
};
int main()
{
    user obj;
    obj.sum();
    obj.getvalue();

    return 0;
}

// 2 OUTSIDE

// class user
// {
// public:
//     int a, b, c;
//     void sum();
//     void getvalue();
//     user ()
// ;
// };
// user::user()
// {
//     cout << "Enter the value of A:";
//     cin >> a;

//     cout << "Enter the value of B:";
//     cin >> b;

//     cout << "Enter the value of C:";

//     cin >> c;
// }

// void user::sum()
// {
//     cout << "first addition " << a + b << endl;
//     cout << "second Multiply " << a * c << endl;
//     cout << "third subtract " << b - c << endl;
// }

// void user::getvalue()
// {
//     if (a > c)
//     {
//         cout << "value B" << b * a;
//     }
//     else if (a > b && c < b)
//     {
//         cout << "value D" << a / c << endl;
//     }
//     else if (a >= b && b >= c)
//     {
//         cout << "Value E " << a * b << endl;
//     }

//     else if (a > c || c > b)
//     {
//         cout << "value D " << a + c << endl;
//     }

//     else
//     {
//         cout << "Value Total: " << b + c + a << endl;
//     }
// }

// int main()
// {
//     user value;
//     value.sum();
//     value.getvalue();

//     return 0;
// }
#include <iostream>
using namespace std;

class Compair
{
public:
    int a, b;
    void value()
    {
        if (a > b)
        {
            /* code */
            cout << "a is greater than b \n";
        }
        else if (a < b)
        {
            cout << "b is greater than a" << endl;
        }
        else
        {
            cout << "a and b are equal" << endl;
        }
    }
};
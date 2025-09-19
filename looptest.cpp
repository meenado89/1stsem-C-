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
            cout << "a is greater than b" << endl;
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

int main()
{
    Compair num;
    cout << "Enter the value of a:";
    cin >> num.a;

    cout << "Enter the value of b:";
    cin >> num.b;

    num.value();

    //    getchar(); it can work but its not rite

    cin.ignore();
    cin.get();

    return 0;
}





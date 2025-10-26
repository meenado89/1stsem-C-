#include <iostream>
using namespace std;

int main()
{
    int day;

    cout << "Enter day number (1 to 6): ";
    cin >> day;

    switch (day)
    {
    case 2:
        cout << "Tuesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    default:
        cout << "Skipping odd day!" << endl;
    }

    return 0;
}

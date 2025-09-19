#include <iostream>
using namespace std;


// OP 1 GETTING SIMPLE VALUE AND REPITATIONS
// int main()
// {
    // VALUE OF i
    // int value;

    // HOW MANY TIMES IT WILL RUN
//     int repetition;
//     int i ;
//     cout << "Enter the value of i  \n";

//     cin >> value;

//     cout << " Enter the number of repetitions of i  \n";
//     cin >> repetition;

//     for (i = value; i <= repetition; i++)
//     {
//         cout << "Number = " <<i<< endl;
//     }
// }

// multiplication


int main()
{
    // VALUE OF i
    int value;

    // HOW MANY TIMES IT WILL RUN
    int repetition;
    int i;
    cout << "Enter the value of i  \n";

    cin >> value ;

    cout << " Enter the number of repetitions of i  \n";
    cin >> repetition;

    for (i = 1 ; i <= repetition; i++)
    {
        cout << "Number = " <<i* value<< endl;
    }
}
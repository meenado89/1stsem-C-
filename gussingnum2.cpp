#include <iostream>
using namespace std;

int main()
{

    int myNum[10] = {12, 55, 77, 7, 25, 56, 78, 6, 73, 68};
    int guess;
    int i;
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess one of the secret numbers." << endl;

    do
    {

        cout << "enter your guessed Number:- ";

        cin >> guess;

        for (i = 0; i < 10; i++)
        {

            for (myNum[i] == guess;)
            {
                cout << "congratulation you guessed right" << endl;
            }
        }
    } while (true);
    {
        cout << "congrats you guessed right!!!  ";
    }

    return 0;
}
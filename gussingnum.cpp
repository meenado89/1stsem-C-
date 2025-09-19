#include <iostream>
using namespace std;

int main()
{

    int myNum[10] = {12, 55, 77, 7, 25, 56, 78, 6, 73, 68};
    int guess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess one of the secret numbers." << endl;

    do
    {
        cout << "enter your guessed Number:- ";

        cin >> guess;

        for (int i = 0; i < 10; i++) 
        {

            if (myNum[i] == guess)
            {
                cout << "congratulation you guessed right" << endl;
                break; }
            
            else
            {
                cout << "Guess again:- " << endl;
                cin >> guess;
 
            }
         
            
        return 0;

    } while (true);
}

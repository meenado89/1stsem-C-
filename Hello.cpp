#include <iostream>
using namespace std;

// 1. HELLO WORLD
/*
int main ()
{

cout<<"Hello World";

}*/

// PRINTING MY NAME
//  int main ()
//  {

//     cout<<"My Name is Meenaskhi !";

//     return 0;
// }

// NAME USER INPUT
// int main()
// {
// int name ;
//     cout<<"Input User Name:-  ";

//     cin>>name;

//     return 0;
// }

// GETTING 3RD VALUE BY USER INPUT OF FIRST 2 VALUES

// int main (){
//     int a = 5;
//     int b = 12;
//     int c;

//     c = a*b;

//     cout<<"Value of C is= "<<c<<endl;
// }

// CLASS/OBJ/INSIDE AGE VALIDATION

// class voter
// {
// public:

//     int vote = 18;
//     int age;

//     void getage()
// {

//     cout << "insert your age  "<< endl;
//     cin >> age;
// }

// void getvalidation()
// {

//     if (age > vote)
//     {

//         cout << "user allowed to vote";
//     }
//     else
//     {
//         cout << "user not allowed to vote";
//     }
// }

// };

// int main()
// {
//     voter valid;
//     valid.getage();
//     valid.getvalidation();

//     return 0;
// }

// NESTED IF(IF INSIDE IF  STATEMENT)

int main()
{
    int marks;

    cout << "Enter Your Marks:- ";

    cin >> marks;

    if (marks >= 90 && marks <= 100)

    {
        cout << "Grade A";
    }
    else
    {
        if (marks >= 75 && marks >= 89)
        {

            cout << "Grade B";
        }
        else
        {

            if (marks >= 50 && marks >= 74)
            {

                cout << "Grade C";
            }
            else
            {

                if (marks >= 50 && marks >= 35)
                {

                    cout << "Grade D";
                }
                else
                {
                    cout << "Failed";
                }
            }
        }
    }

    return 0;
}

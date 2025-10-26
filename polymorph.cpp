#include <iostream>
using namespace std;

//OVERLOADING
class Calculator
{
public:
    // Function to add two numbers
    int add(int a, int b)
    {
        return a + b;
    }

    // Function to add three numbers
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    cout << "Sum of 2 numbers: " << calc.add(5, 10) << endl;       // Calls first function
    cout << "Sum of 3 numbers: " << calc.add(5, 10, 15) << endl;   // Calls second function

    return 0;
}

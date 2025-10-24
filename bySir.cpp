#include <iostream>
using namespace std;

// Function to swap two numbers using call by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
}

// Function to swap two numbers using call by reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - a: " << a << ", b: " << b << endl;
}

int main()
{
    int x = 5, y = 10;

    // Display initial values
    cout << "Before swapByValue - x: " << x << ", y: " << y << endl;

    // Call swapByValue
    swapByValue(x, y);
    cout << "After swapByValue - x: " << x << ", y: " << y << endl;

    // Display initial values again
    cout << "\nBefore swapByReference - x: " << x << ", y: " << y << endl;

    // Call swapByReference
    swapByReference(x, y);
    cout << "After swapByReference - x: " << x << ", y: " << y << endl;

    return 0;
}


// 2 COMMON FOR CONSTRUCTOR N DE CONSTRUCTOR...
class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called: Object is created." << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called: Object is destroyed." << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;

    // Create object of MyClass
    MyClass obj;

    cout << "Doing some work..." << endl;

    // When main() ends, obj is destroyed automatically, calling destructor
    return 0;
}
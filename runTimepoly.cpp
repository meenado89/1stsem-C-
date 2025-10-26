#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()   // virtual function for run-time polymorphism
    {
        cout << "Some generic sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound()   // overrides base class function
    {
        cout << "Barking" << endl;
    }
};

// Derived class
class Cat : public Animal
{
public:
    void sound()   // overrides base class function
    {
        cout << "Meowing" << endl;
    }
};

int main()
{
    Animal* a1;
    Dog d;
    Cat c;

    a1 = &d;
    a1->sound();   // Calls Dog's sound() at runtime

    a1 = &c;
    a1->sound();   // Calls Cat's sound() at runtime

    return 0;
}

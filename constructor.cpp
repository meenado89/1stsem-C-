#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
        cout << "Constructor called!" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Creating object (constructor called automatically)
    Student s1("Meena", 18);

    s1.display();  // Display student details

    return 0;
}

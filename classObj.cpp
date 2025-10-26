#include <iostream>
using namespace std;

// Class definition
class Student
{
public:
    string name;
    int age;

    // Function to display data
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Object creation
    Student s1;

    // Assigning values
    s1.name = "student1";
    s1.age = 18;

    // Function call using object
    s1.display();

    return 0;
}

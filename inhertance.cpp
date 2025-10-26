#include <iostream>
using namespace std;

// Base class
// class Person
// {
// public:
//     void eat()
//     {
//         cout << "Person is eating" << endl;
//     }
// };

// // Derived class~
// class Student : public Person
// {
// public:
//     void study()
//     {
//         cout << "Student is studying" << endl;
//     }
// };

// int main()
// {
//     Student s1;     // Object of derived class
//     s1.eat();       // Function from base class
//     s1.study();     // Function from derived class

//     return 0;
// }


//MULTI INHERITANCE

// Base class
// class Person
// {
// public:
//     void eat()
//     {
//         cout << "Person is eating" << endl;
//     }
// };

// // Derived class 1
// class Student : public Person
// {
// public:
//     void study()
//     {
//         cout << "Student is studying" << endl;
//     }
// };

// Derived class 2 (inherits from Student)
// class Programmer : public Student
// {
// public:
//     void code()
//     {
//         cout << "Programmer is coding" << endl;
//     }
// };

// int main()
// {
//     Programmer p1;     // Object of the most derived class
//     p1.eat();          // Inherited from Person
//     p1.study();        // Inherited from Student
//     p1.code();         // Own function of Programmer

//     return 0;
// }


//MULTI-LEVEL

class Person
{
public:
    void eat() { cout << "Person is eating" << endl; }
};

class Hobby
{
public:
    void play() { cout << "Hobby: Playing..." << endl; }
};

class Student : public Person, public Hobby
{
public:
    void study() { cout << "Student is studying" << endl; }
};

int main()
{
    Student s1;
    s1.eat();    // from Person
    s1.play();   // from Hobby
    s1.study();  // own function
    return 0;
}

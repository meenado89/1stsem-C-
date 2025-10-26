#include <iostream>
using namespace std;

// Abstract class
class Shape
{
public:
    virtual void draw() = 0;   // pure virtual function
};

// Derived class
class Circle : public Shape
{
public:
    void draw()   // implementation of pure virtual function
    {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class
class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    Shape* s1;
    Circle c;
    Rectangle r;

    s1 = &c;
    s1->draw();   // Calls Circle's draw

    s1 = &r;
    s1->draw();   // Calls Rectangle's draw

    return 0;
}

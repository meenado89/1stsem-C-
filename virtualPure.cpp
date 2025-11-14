#include <iostream>
using namespace std;

class A {
public:
    virtual void say() = 0;   // pure virtual as  parent has no work
};

class B : public A {
public:
    void say() {              // child MUST give the work
        cout << "B says Hello\n";
    }
};

int main() {
    A* obj;   // parent pointer

    B b;
    obj = &b; // pointer to child

    obj->say();
}

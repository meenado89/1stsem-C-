#include <iostream>
using namespace std;

class Student {
public:
    Student() {  // Constructor
        cout << "Constructor called: Object created!" << endl;
    }

    ~Student() { // Destructor
        cout << "Destructor called: Object destroyed!" << endl;
    }
};

int main() {
    Student s1; // Object creation
    cout << "Inside main function" << endl;
    return 0;
}

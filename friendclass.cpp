#include <iostream>
using namespace std;

// FRIEND CLASS 
class test {

private:
int a = 10;

protected:
int b = 35;

// DECLARING TESTING FRIEND AS A FRIEND CLASS
public:
friend class testing_friend;

};

class testing_friend{
    public:
    void display(test & F1){
 
        int c = 10;
        int d = F1.a + c ;


        cout<<"Taken from Private A"<<endl;
        cout<<"Value of D = "<<F1.a+c<<endl;
        cout<<"________________________"<<endl;

        cout<<"Taken from Protected B"<<endl;
        cout<<"Value of C+B = "<<c+ F1.b<<endl;
        cout<<"________________________"<<endl;
    }
};

int main (){
    test B1;
    testing_friend B2;
    B2. display(B1);

    return 0;
}
#include <iostream>
using namespace std;

class parent {
    public:
    virtual void wave(){
        cout<<"Parents waving"<<endl;
    }
};

class child : public parent {
    void handShake (){

        cout<<"child shakes hand"<<endl;
    }
};

int main (){
    parent*obj;
    child hello;
    obj= & hello;
    obj ->wave ();
}

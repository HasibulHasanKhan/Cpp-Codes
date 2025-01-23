#include <iostream>
using namespace std;

class Base {
    public: 
      virtual void display() {
        cout << "Display function in Base class " << endl;

      }
};

class Derived : public Base {
    public:
     void display() override {
        cout << "Display function in Derived class " << endl;
     }
};

int main () {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;
    basePtr -> display();
    

    return 0;
}
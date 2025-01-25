#include <iostream>
using namespace std;

class Myclass {
    public:
     void myFunction () {
        cout << "Hello" << endl;
     }
};

class Mychild: public Myclass {

};

class MyGrandChild: public Mychild {

};

int main () {
    MyGrandChild myobj;
    myobj.myFunction();

    return 0;
}
/**
 A constructor a specitial type of method that is called autometically when an object of a class is created.

 -> constructor will be same name as the class.
 */

#include <iostream>
using namespace std;

class Myclass {
    public:
     Myclass(){
        cout << "Hello World";
     }
};

int main () {
    Myclass MyObj;
    return 0;
}

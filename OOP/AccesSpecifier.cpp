/**
 1. public : 
   members are accesible from outside the class.
 2. private :

   members cannot be accessed from outside the class.alignas
 3. protected :

  members cannot be accesed from outside the class however , they can be accessed in inherited classe. 
 */
#include <iostream>
using namespace std;

class MyClass {
    public:
     int x;
    
    private:
     int y;
};

int main () {
    MyClass myObj;
     myObj.x = 39;
    //  myObj.y =40; // cannot access as private in class .

     return 0;
}


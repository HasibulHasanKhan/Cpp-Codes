/*
 Can be accessed within the same class where they are declared.

 can be accessed by any class that inherits from that class (derived classes)

 cannot be accessed directly from outside the class or its derived classes.
*/

#include<iostream>
using namespace std;

class Base {
    protected:
     int protectedVar;

    public:
     void setProtedVar(int value){
        protectedVar = value;

     }
    
     void showProtectedVar(){
        cout << "Protected Variable: "<< protectedVar << endl;
     }


};

class Derived : public Base {
    public:

     void useProtectedVar(){
        protectedVar = 42;
        cout << "Derived class modified protected variable: "<< protectedVar << endl;
     }
};


int main (){

 Base baseObj;
 Derived derivedObj;

 baseObj.setProtedVar(10);
 baseObj.showProtectedVar();

 derivedObj.useProtectedVar();
  
  return 0;

}
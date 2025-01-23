#include<iostream>
using namespace std;

class Base {
    public: 
      int publicVar = 10;

    private:
      int privateVar = 20;

    protected:
      int protectedVar = 30; 

};

class Derived : public Base {

    public:

     void show()  {
        cout << "Public: " << publicVar << endl;
        cout << "Protected: " << protectedVar << endl;

        // cout << "Private: "<< privateVar << endl;
     }
};

int  main (){

 Derived myDerived;
  myDerived.show();

}
/*
Polymorphism  allow  functions, methods or operators to behave differently depending on the contex. If enables a single interface to be used for different data types or actions
*/

#include <iostream>
using namespace std;

class Calculator {
    public:
     
     int add(int a , int b) {
        return a + b ;

     }

     int add(int a , int b, int c) {
        return a + b + c;
     }

     float add(float a , float b){
        return a + b;
     }
};

int main () {
    Calculator myCalculator;

   int x = myCalculator.add(10, 4);
  int y =  myCalculator.add(10, 4 ,6);
  int z =  myCalculator.add(10.22f, 4.55f);

  cout << x << " " << y << " " << z;

  return 0;
}
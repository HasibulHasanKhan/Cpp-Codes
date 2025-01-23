#include <iostream>
#include <iomanip>
using namespace std;

int main () {
   float num1, num2 ;

   cout << "Enter two numbers :";
   cin >> num1 >> num2;

      cout << showpoint;
      cout << fixed; // After decimal;
      cout << setprecision(2);// For full number.
 // setw(20) // take sapce from left side.
   float sum = num1 + num2;
   cout << setw(30) << "Sum is :" <<sum;
   cout <<endl;

 
   float sub = num1 - num2 ;
   cout <<setw(40) << "Sub is :" <<sub;
   cout <<endl;

   cout << noshowpoint;
   float mul = num1 * num2;
   cout << setw(30) <<"mul is :" <<mul;
   cout<<endl;
 
}

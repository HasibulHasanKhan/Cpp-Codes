#include<iostream>
using namespace std;
int main () {
   double base, height, area;

   cout << "Enter base :" ;
   cin >> base;

   cout << "Enter height :";
   cin >> height;

   area = 1.0 / 2 * base * height;
   cout << "Area of Triangle : " << area;
   return 0;
}

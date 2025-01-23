#include<iostream>
using namespace std;

// template <class myTemplate>
// myTemplate add(myTemplate a , myTemplate b) {
//     return a+b;
// }

// int main () {
   
//   cout << add(10, 20) << endl;
//   cout << add (13.3 , 2.3) << endl;

//   return 0;

// }

template <class myTemplate1 , class myTemplate2>
myTemplate1 add(myTemplate1 a , myTemplate2 b) {
    return a+b;
}

int main () {
   
  cout << add(10, 20) << endl;
  cout << add (13.3 , 2) << endl;

  return 0;

}
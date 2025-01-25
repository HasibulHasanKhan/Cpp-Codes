#include <iostream>
using namespace std;

int myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
  return x;
}

int main() {
 int y = myFunction();
  
  // Print the variable x in the main function
  cout << y;
  return 0;
}

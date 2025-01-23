#include<iostream>
using namespace std;

class Student {
    public :
      int id;
      double gpa;
      void display() {
        cout << id << "  " << gpa << endl;
      }
      void setValue ( int x , double y){
        id = x;
        gpa = y;
      }
      
};

int main () {
  Student Hasib  , Hasan;
    //   Hasib.id = 101;
    //   Hasib.gpa = 2.3;
    Hasib.setValue(102, 4.3);
      Hasib.display();
     
}
#include<iostream>
using namespace std;


class Student {
    public :
      int id ;
      double gpa ;

      void display () {
        cout << id << "  " << gpa << endl;

      }
      Student (int x , double y) {
        id = x;
        gpa = y;
      }
      Student (){
        cout << "Default constructor " << endl;
      }
};

int main () {

    Student ob;

    Student Hasib(1011 , 4.5);
            Hasib.display();

     return 0;       

}
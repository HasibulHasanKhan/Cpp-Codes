/*
 encapsulation is one of the fundamental principles of Object-Oriented Programming . It is the practice of bunding data(variable) and methods that operate on the data into a single unit called a class . Encapsulation hepls protect the data from unauthorized access and misues by restriicting direct access and providing controlled inerfaces.

 Key features :
  -private
  -public
  -private
 
*/

#include<iostream>
using namespace std;

class Person {
    private:

     string name;
     int age;

     public:
      void setName(string name){
        this -> name = name;
      }
      string getName(){
        return name;
      }

      void setAge(int a) {
        if( a >=0 ) {
            age = a;
        } else {
            cout << " Invalid age! "<<endl;
        }
      }

      int getAge () {
        return age;
      }
};

int main () {

     Person p;
     p.setName("Alice");
     p.setAge(24);

     cout << "Name: " << p.getName() <<endl;
     cout << "Age: " << p.getAge() << endl;

}
/**
 encapsulation is one of the fundamental principle of Object - Oriented Programming . it involves bunding the data variable and methods that operate on the data into a single unit , typically a class .Encapsulation also restrics direct access to some object's components, usually by using access specifiers like private, protected , publice.alignas

 */

#include <iostream>
using namespace std;

class Student {
    private:
     string name;
     int age;
     float grade;

    public:
     void setDetails(string studentName, int studentAge, float studentGrade) {
        name = studentName;
        age = studentAge;
        grade = studentGrade;
     }
     void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "grade: " << grade << endl;

     }
};

int main () {
    Student s1;
    s1.setDetails("Alice", 20, 33.3);
    s1.displayDetails();

    return 0;
;}
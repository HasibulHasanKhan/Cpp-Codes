#include <iostream>
using namespace std;

class Car {
    public:
     string brand;
     string model;
     int year;
     Car(string x, string y, int z);
};
Car::Car(string x, string y, int z ){
    brand = x;
    model = y;
    year = z;


};

int main () {
    Car carObj("Ford", "Mustang", 1999);

    cout << carObj.brand << " " << carObj.model << " " << carObj.year <<"\n";
}
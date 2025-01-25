#include <iostream>
using namespace std;

class Car {
    public:
     
     int Speed(int MaxSpeed) ;
};

int Car::Speed(int MaxSpeed){
    return MaxSpeed;
};

int main () {
    Car MyCar;
   int result = MyCar.Speed(200);

    cout << result << endl;

    return 0;
}
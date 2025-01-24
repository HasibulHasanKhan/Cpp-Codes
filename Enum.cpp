#include <iostream>
using namespace std;
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

void printLightState(TrafficLight light){
 switch (light){
    case RED:
     cout << " Stop " << endl;
          break;
    case YELLOW:
     cout << " Caution " << endl;
          break;
    case GREEN:
     cout << " Go " << endl; 
          break;
    default:
     cout << " Invalid state " << endl; 
 }  

};
int main (){
    TrafficLight light = GREEN;

    printLightState(light);

    light = YELLOW;
    printLightState(light);

    return 0;
}
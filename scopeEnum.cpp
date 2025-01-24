
#include <iostream>
using namespace std;

enum class Direction {
    NORT,
    SOUT,
    EAST,
    WEST,
};
int main (){
    Direction dir = Direction::NORT;

    if (dir == Direction::NORT){
        cout << " Heading North !" << endl;
    }
    return 0;
}
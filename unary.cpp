/**
 *  // + / - / -- / ++ /
 */
#include <iostream>
using namespace std;

int main () {
    int x = 3;

    int y = x++;
    cout << x << "\n";
    y = --x;

    cout << x << "\n";
    cout << y << "\n";

}
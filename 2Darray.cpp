#include<iostream>

using namespace std;

int main () {
    int Arr [2] [3] = {
        {10,20,25},
        {20,20,12}
    };

    for(int row = 0; row < 2 ; row++){
        for(int col = 0; col < 3; col++){
            cout << Arr [row] [col] << "  ";
        }
        cout << endl;

    }
}
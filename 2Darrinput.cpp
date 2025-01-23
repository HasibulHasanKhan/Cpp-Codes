#include<iostream>

using namespace std;

int main () {
    int Arr[2][3];

    cout << "Enter the elements for the matrix "<< endl;

    for (int row = 0; row < 2 ; row++){
        for(int col = 0; col <3; col++){
            cout << "Arr["<<row<<"] ["<<col<<"] = ";
            cin >> Arr[row][col];
        }
    }
    
    for(int row = 0; row < 2 ; row++){
        for(int col = 0; col < 3; col++){
            cout << Arr [row] [col] << "  ";
        }
        cout << endl;

    }

}
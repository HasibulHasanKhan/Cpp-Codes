#include<iostream>
using namespace std;
int marks[5];

int main () {
    for (int i = 0 ; i < 5; i++) {
       cout << "Marks for student "<< i+1 << " = ";
       cin >> marks[i];
    }

    cout << "Marks are : ";
    for (int i=0; i < 5 ; i++){
        cout << marks[i] << " ";
    }
}
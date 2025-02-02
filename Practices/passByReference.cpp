#include <iostream>
using namespace std;

void modiFyReference (int &num) {
    num = num + 5;
    cout << "Inside function (after modification): " << num << endl;
}

int main ( ) {
    int a = 10;
    cout << "Before function call: " << a << endl;
    modiFyReference(a);
    cout << "After functin call: " << a << endl;
    return 0;
}
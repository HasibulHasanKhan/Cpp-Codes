#include <iostream>
using namespace std;

void modiFyValue (int num) {
    num = num + 5;
    cout << "Inside function (after modification): " << num << endl;
};

int main () {
    int a = 10;
    cout << "Before function call:" << a << endl;
    modiFyValue(a);
    cout << "After function call: " << a << endl; // a remains unchanged
    return 0;
}

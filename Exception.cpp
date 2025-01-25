#include <iostream>
using namespace std;

// int main () {
//     try {
//         int age = 10;
//         if (age >= 18) {
//             cout << "Access granted - you are old enough.";
//         }else {
//             throw (age);
//         }
//     }

//     catch (int myNum) {
//         cout << "Access denied - You must be at least 18. "<< endl;
//         cout << "Age is : "<< myNum;
//     }

//     return 0;
// }

int main () {
    try {
        int age = 105;
        if (age >=18) {
            cout << "Access granted " <<endl;
        }else {
            throw 505;
        }
    }
    catch (int myNum) {
        cout << "Access denied you need to be 18 years old.";
        cout << "Error: " << myNum;
    }
}
#include <iostream>
using namespace std;

// void myFunction (string name = "Annonymous", int age = 21){
//     cout << name << " Hasan " << age << " years old.\n" ;
// }


// int main () {
//     myFunction("Hasibul", 20);
//     myFunction( );

//     return 0;
// }
//// funtion array :

void myFunction (int myNumbers[5]){
    for (int i = 0; i < 5 ; i++) {
        cout << myNumbers[i] << "\n";
    }
}
    

    int main () {
        int myNumbers[5] = { 10, 20, 30, 40, 50};

        myFunction(myNumbers);

        return 0;
    }

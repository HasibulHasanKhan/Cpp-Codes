// #include <iostream>
// using namespace std;

// int main() {
//     int num = 10;       // A regular integer variable
//     int* ptr = &num;    // Pointer stores the address of 'num'

//     cout << "Value of num: " << num << endl;
//     cout << "Address of num: " << &num << endl;
//     cout << "Value stored in ptr: " << *ptr << endl;
//     cout << "Value pointed to by ptr: " << *ptr << endl;

//     return 0;
// }
//-----------------------------------
//Null Pointers :

// #include <iostream>
// using namespace std;

// int main () {
//     int* ptr = nullptr;

//     if (ptr == nullptr){
//         cout << "Pointer is null. "<< endl;
//     }
//     return 0;
// }
////Pointer to pointer :

// #include <iostream>
// using namespace std;

// int main () {
//     int num = 10;
//     int* ptr = &num;
//     int** ptr2 =&ptr;

//     cout << "Value of num: " << &num << endl;
//     cout << "Value using ptr: " << ptr << endl;
//     cout << "Value using ptr2: " << *ptr2 << endl;

//     return 0;
// }
////Dynamic Memory Allocation with Pointers :

// #include <iostream>
// using namespace std;

// int main ()  {
//     int* ptr = new int ;
//     *ptr =20;
//     cout << "Value: " << *ptr << endl;

//     delete ptr;
//     ptr = nullptr;

//     return 0;
// }

////Pointer Arrays :
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[5] = {10, 20, 30, 40 ,45};
//     int* ptr[5];

//     for( int i = 0; i < 5 ; i++ ) {
//         ptr[i] = &arr[i];

//     }

//     for (int i = 0; i < 5; i++){
//         cout << "Value of arr[" << i << "]: " << *ptr[i] << endl;

//     }
//     return 0;
// }

//// Pointers and Functions :
#include <iostream>
using namespace std;

void increment(int* ptr) {
    (*ptr)++;
}

int main (){
    int num = 20;

    cout << "Before Increment: " << num << endl;

    increment(&num);

    cout << "After Increment: " << num << endl;

    return 0;
}
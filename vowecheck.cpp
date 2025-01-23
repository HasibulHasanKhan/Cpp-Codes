#include<iostream>
using namespace std;

int main () {
    char ch;

    cout << "Enter any Letter :";
    cin >> ch;

    ch = tolower(ch);

    if(ch=='e'|| ch=='a' || ch=='i' || ch=='o'||ch=='u'){
        cout << "Vowel";
    } else {
        cout << "Consonent";
    }

}
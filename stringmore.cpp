#include<iostream>
#include<string>
using namespace std;

int main (){
    string s1 = "Hello";
    string s2 = "World";

    cout << "Concatenation : "<< s1 +  " " + s2 << endl;
    cout << "Length of s1 : " << s1.length() << endl;
    cout << "First character of s1 : " << s1[0] << endl;

    string s3 = s1 + " " + s2;
    cout << "Substring of s3 (0 to 4):" << s3.substr(0, 5) << endl;

    s3.append("!");
    cout << "After append : "<< s3 << endl;
    return 0;
    

}


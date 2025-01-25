#include <iostream>
#include <fstream>
using namespace std;

int main () {

   string Mytext;

   ifstream MyReadFile ("Hasib.txt");

   while(getline(MyReadFile, Mytext)) {
    cout << Mytext;
   }

   MyReadFile.close();


};
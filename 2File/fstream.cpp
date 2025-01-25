/*
 There are three classes included in the fstream library , which are used to create , write , read files.

 1. ofstream -> Creates and writes to files. 
 2. ifstream -> Reads from files. 
 3. fstream -> A combination of ofstream and ifstream: creates, reads, and writes to files. 
*/

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream MyFile ("filename.txt");

    MyFile << "The name of our country is Bangladesh.";


    MyFile.close();
}

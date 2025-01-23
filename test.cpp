// #include <iostream>

// int main() {
//     char letter;
//     std::cout << "Enter a character: ";
//     std::cin.get(letter);  // Read a single character
//     std::cout << "You entered: " << letter << std::endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    float height;

    cout << "Enter your name: ";
    cin >> name;  // Reads a word (up to the first space)
    
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters: ";
    cin >> height;

    cout << "Hello " << name << ", you are " << age << " years old and " << height << " meters tall." << endl;
    return 0;
}

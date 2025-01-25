#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound()  { // Overriding base class function
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound()  { // Overriding base class function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animal; // Base class pointer

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound(); // Calls Dog's makeSound()

    animal = &cat;
    animal->makeSound(); // Calls Cat's makeSound()

    return 0;
}

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "This is an animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound(string str) {
        cout << "This sound i need to make " << str << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

void makeSound(Animal* animal) {
    animal->sound(); 
}

int main() {
    Dog dog;
    Cat cat;

    makeSound(&dog); 
    makeSound(&cat); 

    return 0;
}

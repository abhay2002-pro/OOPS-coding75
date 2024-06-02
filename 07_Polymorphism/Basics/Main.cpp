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
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Animal* animalPtr;
    Dog dog;

    animalPtr = &dog;

    animalPtr->sound(); 

    return 0;
}

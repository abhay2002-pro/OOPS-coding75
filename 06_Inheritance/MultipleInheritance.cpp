#include <iostream>
using namespace std;

class Animal {
public:
    virtual void eat() = 0; 
};

class Mammal {
public:
    void sleep() {
        cout << "This mammal sleeps." << endl;
    }
};

class Dog : public Mammal, public Animal {
public:
    void eat() override {
        cout << "The dog eats." << endl;
    }

    void bark() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    Dog dog;
    dog.sleep();  
    dog.eat();    
    dog.bark();   
    return 0;
}

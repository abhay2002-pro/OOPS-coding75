#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;

    void sleep() {
        cout << "This animal sleeps." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->sound(); 
    cat->sound(); 
    dog->sleep(); 
    cat->sleep(); 

    delete dog;
    delete cat;
    return 0;
}

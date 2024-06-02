#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0; 
    virtual void sleep() = 0; 
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }

    void sleep() override {
        cout << "The dog sleeps." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }

    void sleep() override {
        cout << "The cat sleeps." << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->sound(); 
    dog->sleep();
    cat->sound(); 
    cat->sleep();

    delete dog;
    delete cat;
    return 0;
}

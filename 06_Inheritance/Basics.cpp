#include <iostream>
using namespace std;

class Animal {
protected:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }

    void eat() {
        Animal::eat();
    }
};

int main() {
    Animal animal;
    Dog dog;

    dog.bark(); 
    dog.eat();
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    string name;
    string species;

    Animal(string name, string species) {
        this->name = name;
        this->species = species;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Species: " << species << endl;
    }
};

int main() {
    Animal myAnimal1("Buddy", "Dog");
    myAnimal1.displayInfo();

    Animal myAnimal2("Madam", "Cat");
    myAnimal2.displayInfo();
    return 0;
}

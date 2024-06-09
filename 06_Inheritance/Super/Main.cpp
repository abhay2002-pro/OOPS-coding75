#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;

public:
    Person(string name) : name(name) {}

    void display() {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
private:
    string company;

public:
    Employee(string name, string company) : Person(name) {
        this->company = company;
    }

    void display() {
        Person::display(); 
        cout << "Company: " << company << endl;
    }
};

int main() {
    Employee employee("Alice", "TechCorp");
    employee.display();
    return 0;
}

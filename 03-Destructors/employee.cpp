#include<iostream> 
#include <string> 

using namespace std;

class Employee {
public:
    string name;
    long long salary;

    Employee(string name, long long salary) {
        this->name = name;
        this->salary = salary;
    }

    ~Employee() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Employee* e1 = new Employee("employee", 100000ll); // Dynamically allocated object
    Employee e2("employee", 100000ll); // Local object
    
    delete e1; // Explicit call of destructor for the dynamically allocated object

    // e1->~Employee(); Not recommended practice
    return 0;
}

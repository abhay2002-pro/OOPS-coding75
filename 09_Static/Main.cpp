#include <iostream>
using namespace std;

class Math {
public:
    static int counter;
    static void print() {
        cout << "I am a Math class" << endl;
    } 
};

int Math::counter = 0;

int main() {
    // Math math1; 
    // Math math2;
    // Math::counter++; 
    Math::print();
    // cout << math1.counter << " " << math2.counter << endl;
    return 0;
}

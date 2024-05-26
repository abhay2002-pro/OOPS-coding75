#include <iostream>
#include <string>

using namespace std;

class Square {
public:
    int side;

    Square(int side) {
        this->side = side;
    }

    Square(const Square &s) {
        this->side = s.side;
    }

    void displayArea() const {
        cout << "Square area: " << this->side * this->side << endl;
    }
};

int main() {
    Square s1(4);

    Square s2 = s1;

    s2.displayArea(); 

    return 0;
}

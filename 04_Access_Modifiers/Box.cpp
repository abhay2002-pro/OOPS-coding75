#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    void displayBox() {
        cout << "Box dimensions: " << this->length << " x " << this->width << endl;
    }
};

int main() {
    Box box;
    box.displayBox();
    // cout << box.length << endl; // member "Box::length" (declared at line 6) is inaccessible
    return 0;
}

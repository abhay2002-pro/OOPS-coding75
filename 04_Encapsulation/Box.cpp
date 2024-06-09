#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:

    void setLength(int length) {
        if(length < 0) {
            cout << "Box's length cannot be negative\n";
        } else {
            this->length = length;
        }
    }    
    int getLength() {
        return length;
    }
    int getWidth() {
        return width;
    }
    void setWidth(int width) {
        if(width < 0) {
            cout << "Box's width cannot be negative\n";
        } else {
            this->width = width;
        }
    }    
    void displayBox() {
        cout << "Box dimensions: " << this->length << " x " << this->width << endl;
    }
};

int main() {
    Box box;
    box.setLength(-10);
    box.setWidth(20);
    box.displayBox();
    // cout << box.length << endl; // member "Box::length" (declared at line 6) is inaccessible
    return 0;
}

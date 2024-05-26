#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    void displayRectangle() {
        cout << "Rectangle dimensions: " << this->length << " x " << this->width << endl;
    }
};

int main() {
    Rectangle Rectangle(10, 20);

    Rectangle.displayRectangle();
    return 0;
}

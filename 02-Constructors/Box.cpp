#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;

    void displayBox() {
        cout << "Box dimensions: " << this->length << " x " << this->width << endl;
    }
};

int main() {
    Box box;
    box.length = 10;
    box.width = 20;

    box.displayBox();
    return 0;
}

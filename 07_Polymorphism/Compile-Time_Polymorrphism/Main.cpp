#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << "Sum of 2 and 3: " << math.add(2, 3) << endl;          
    cout << "Sum of 2, 3, and 4: " << math.add(2, 3, 4) << endl;  
    cout << "Sum of 2.5 and 3.5: " << math.add(2.5f, 3.5) << endl; 
    return 0;
}

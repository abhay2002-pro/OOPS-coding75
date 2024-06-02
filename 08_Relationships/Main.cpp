#include <iostream>
#include <string>
using namespace std;

class Man {
private:
    string name;
    int age;

public:
    Man(string name, int age) : name(name), age(age) {}

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }
};

class Marker {
private:
    string color;

public:
    Marker(string color) : color(color) {}

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }
};

class Vehicle {
public:
    virtual void move() = 0;
};

class Bike : public Vehicle {
public:
    void move() override {
        cout << "The bike is moving." << endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "The car is moving." << endl;
    }
};

class Instructor : public Man {
private:
    string laptopBag;

public:
    Instructor(string name, int age, string laptopBag) : Man(name, age), laptopBag(laptopBag) {}

    void write(Marker marker) {
        cout << "Writing with a " << marker.getColor() << " marker." << endl;
    }

    string getLaptopBag() {
        return laptopBag;
    }

    void setLaptopBag(string laptopBag) {
        this->laptopBag = laptopBag;
    }

    void move(Vehicle* vehicle) {
        vehicle->move();
    }
};

int main() {
    Instructor instructor("John Doe", 30, "Targus");
    Marker marker("red");
    Bike bike;
    Car car;

    cout << "Instructor Name: " << instructor.getName() << endl;
    cout << "Instructor Age: " << instructor.getAge() << endl;
    cout << "Instructor's Laptop Bag: " << instructor.getLaptopBag() << endl;
    instructor.write(marker);
    instructor.move(&bike);
    instructor.move(&car);

    return 0;
}

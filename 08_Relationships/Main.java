abstract class Vehicle {
    abstract void move();
}

class Bike extends Vehicle {
    @Override
    void move() {
        System.out.println("The bike is moving.");
    }
}

class Car extends Vehicle {
    @Override
    void move() {
        System.out.println("The car is moving.");
    }
}

class Man {
    private String name;
    private int age;

    public Man(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}

class Marker {
    private String color;

    public Marker(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
}

class Instructor extends Man {
    private String laptopBag;

    public Instructor(String name, int age, String laptopBag) {
        super(name, age);
        this.laptopBag = laptopBag;
    }

    public void write(Marker marker) {
        System.out.println("Writing with a " + marker.getColor() + " marker.");
    }

    public String getLaptopBag() {
        return laptopBag;
    }

    public void setLaptopBag(String laptopBag) {
        this.laptopBag = laptopBag;
    }

    public void move(Vehicle vehicle) {
        vehicle.move();
    }
}

public class Main {
    public static void main(String[] args) {
        Instructor instructor = new Instructor("John Doe", 30, "Targus");
        Marker marker = new Marker("red");
        Bike bike = new Bike();
        Car car = new Car();

        System.out.println("Instructor Name: " + instructor.getName());
        System.out.println("Instructor Age: " + instructor.getAge());
        System.out.println("Instructor's Laptop Bag: " + instructor.getLaptopBag());
        instructor.write(marker);
        instructor.move(bike);
        instructor.move(car);
    }
}

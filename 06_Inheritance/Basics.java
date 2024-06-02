// Base Class
class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

// Derived Class
class Dog extends Animal {
    void bark() {
        System.out.println("The dog barks.");
    }
}

public class Basics {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();  // Inherited method
        dog.bark(); // Own method
    }
}

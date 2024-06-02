interface Animal {
    void eat();
}

class Mammal {
    void sleep() {
        System.out.println("This mammal sleeps.");
    }
}

class Dog extends Mammal implements Animal {
    public void eat() {
        System.out.println("The dog eats.");
    }

    void bark() {
        System.out.println("The dog barks.");
    }
}

public class MultipleInheritance {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sleep();  
        dog.eat();   
        dog.bark();   
    }
}

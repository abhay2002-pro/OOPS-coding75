abstract class Animal {
    abstract void sound();

    void sleep() {
        System.out.println("This animal sleeps.");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("The dog barks.");
    }
}

class Cat extends Animal {
    void sound() {
        System.out.println("The cat meows.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();

        dog.sound(); 
        cat.sound(); 
        dog.sleep(); 
        cat.sleep(); 
    }
}

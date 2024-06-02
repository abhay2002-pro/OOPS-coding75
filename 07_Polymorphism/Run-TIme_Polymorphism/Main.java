class Animal {
    void sound() {
        System.out.println("This is an animal sound.");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("The dog barks.");
    }
}

class Cat extends Animal {
    @Override
    void sound() {
        System.out.println("The cat meows.");
    }
}

public class Main {
    public static void makeSound(Animal animal) {
        animal.sound(); 
    }

    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();

        makeSound(dog); 
        makeSound(cat); 
    }
}

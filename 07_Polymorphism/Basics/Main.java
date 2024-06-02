class Animal {
    void sound() {
        System.out.println("This is an animal sound.");
    }
}

class Dog extends Animal {
    void sound() {
        System.out.println("The dog barks.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal animalRef;
        Dog dog = new Dog();

        animalRef = dog;

        animalRef.sound(); 
    }
}

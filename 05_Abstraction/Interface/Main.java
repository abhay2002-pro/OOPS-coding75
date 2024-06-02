interface Animal {
    void sound();
    void sleep();
}

class Dog implements Animal {
    @Override
    public void sound() {
        System.out.println("The dog barks.");
    }

    @Override
    public void sleep() {
        System.out.println("The dog sleeps.");
    }
}

class Cat implements Animal {
    @Override
    public void sound() {
        System.out.println("The cat meows.");
    }

    @Override
    public void sleep() {
        System.out.println("The cat sleeps.");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal dog = new Dog();
        Animal cat = new Cat();

        dog.sound(); 
        dog.sleep();
        cat.sound(); 
        cat.sleep(); 
    }
}

public class Main {
    static int staticVariable = 10;

    static void staticMethod() {
        System.out.println("This is a static method.");
        System.out.println("Static variable value: " + staticVariable);
    }

    int nonStaticVariable;

    public Main(int value) {
        this.nonStaticVariable = value;
    }

    void nonStaticMethod() {
        System.out.println("This is a non-static method.");
        System.out.println("Non-static variable value: " + nonStaticVariable);
    }

    public static void main(String[] args) {
        // Accessing static variable and method without creating an instance
        System.out.println("Static variable value: " + Main.staticVariable);
        Main.staticMethod();

        // Creating instances of Main
        Main obj1 = new Main(20);
        Main obj2 = new Main(30);

        // Accessing non-static variables and methods
        obj1.nonStaticMethod();
        obj2.nonStaticMethod();
    }
}

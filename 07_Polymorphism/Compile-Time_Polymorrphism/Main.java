class Math {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two double values
    double add(double a, double b) {
        return a + b;
    }
}

public class Main {
    public static void main(String[] args) {
        Math math = new Math();
        System.out.println("Sum of 2 and 3: " + math.add(2, 3));          // Calls add(int, int)
        System.out.println("Sum of 2, 3, and 4: " + math.add(2, 3, 4));   // Calls add(int, int, int)
        System.out.println("Sum of 2.5 and 3.5: " + math.add(2.5, 3.5));  // Calls add(double, double)
    }
}

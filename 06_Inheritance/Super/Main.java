class Person {
    private String name;

    public Person(String name) {
        this.name = name;
    }

    public void display() {
        System.out.println("Name: " + name);
    }
}

class Employee extends Person {
    private String company;

    public Employee(String name, String company) {
        super(name);
        this.company = company;
    }

    @Override
    public void display() {
        super.display(); 
        System.out.println("Company: " + company);
    }
}

public class Main {
    public static void main(String[] args) {
        Employee employee = new Employee("Alice", "TechCorp");
        employee.display();
    }
}

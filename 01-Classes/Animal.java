class Animal {
    String name;
    String species;

    public Animal(String name, String species) {
        this.name = name;
        this.species = species;
    }

    public void displayInfo() {
        System.out.println("Name: " + name + ", Species: " + species);
    }
    
    public static void main(String[] args) {
        Animal myAnimal1 = new Animal("Buddy", "Dog");
        myAnimal1.displayInfo();

        Animal myAnimal2 = new Animal("Madam", "Cat");
        myAnimal2.displayInfo();
    }
}

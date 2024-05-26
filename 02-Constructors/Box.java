class Box {
    int length;
    int width;

    void displayBox() {
        System.out.println("Box dimensions: " + length + " x " + width);
    }

    public static void main(String[] args) {
        Box box = new Box();
        box.length = 10;
        box.width = 20;

        box.displayBox();
    }
}

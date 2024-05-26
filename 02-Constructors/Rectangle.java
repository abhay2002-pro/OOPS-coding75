class Rectangle {
    int length;
    int width;

    Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    void displayRectangle() {
        System.out.println("Rectangle dimensions: " + length + " x " + width);
    }

    public static void main(String[] args) {
        Rectangle Rectangle = new Rectangle(10, 20);

        Rectangle.displayRectangle();
    }
}

class Square {
    int side;

    Square(int side) {
        this.side = side;
    }

    Square(Square s) {
        this.side = s.side;
    }

    void displaySquare() {
        System.out.println("Square area: " + this.side*this.side);
    }

    public static void main(String[] args) {
        Square s1 = new Square(4);
        Square s2 = new Square(s1);

        s2.displaySquare();
    }
}

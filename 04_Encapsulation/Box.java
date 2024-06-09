class Box {
    private int length;
    private int width;

    public void displayBox() {
        System.out.println("Box dimensions: " + length + " x " + width);
    }
    

    public int getLength() {
        return length;
    }


    public void setLength(int length) {
        this.length = length;
    }


    public int getWidth() {
        return width;
    }


    public void setWidth(int width) {
        this.width = width;
    }


    public static void main(String[] args) {
        Box box = new Box();
        box.length = 10;
        box.width = 20;

        box.displayBox();
    }
}


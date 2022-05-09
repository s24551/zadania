package lab07.zad1;

public class Rectangle extends Shape {
private double x;
private double y;

    public Rectangle(double x, double y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public double getArea(){
        System.out.println("Pole prostokata: ");
        return x*y;
    }
    @Override
    public double getPerimeter(){
        System.out.println("Obwod prostokata: ");
        return 2*x+2*y;
    }


}

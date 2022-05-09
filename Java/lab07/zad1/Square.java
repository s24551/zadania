package lab07.zad1;

public class Square extends Shape{
private double x;

    public Square(double x) {
        this.x = x;
    }

    @Override
    public double getArea(){
        System.out.println("Pole kwadratu: ");
        return x*x;
    }
    @Override
    public double getPerimeter(){
        System.out.println("Obwod kwadratu: ");
        return x*4;
    }
}



package lab07.zad1;

public class Circle extends Shape{

    private double radius;

    public Circle( double radius) {
        this.radius = radius;
    }

    @Override
    public double getArea(){
        System.out.println("Pole kola: ");
        return (Math.PI) * (radius * radius);
    }
    @Override
    public double getPerimeter(){
        System.out.println("Obwod kola: ");
        return  (2 * (Math.PI) * radius);
    }
}

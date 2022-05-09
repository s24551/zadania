package lab07.zad1;

public class Triangle extends Shape {
    private double a;
    private double b;
    private double c;
    private double h;

    public Triangle(double a, double b, double c, double h) {
        if (a + b > c) {
            this.a = a;
            this.b = b;
            this.c = c;
            this.h = h;
        }
        else{
            System.out.println("Niewlasciwy trojkat");
        }
    }
        @Override
        public double getArea(){
            System.out.println("Pole trojkata: ");
            return a * h;
        }

        @Override
        public double getPerimeter(){
            System.out.println("Obwod trojkata: ");
            return a + h + c;
        }
    }

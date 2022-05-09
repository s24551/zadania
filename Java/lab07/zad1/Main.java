package lab07.zad1;

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Rectangle prostokąt = new Rectangle(4, 3);
        Square kwadrat= new Square(2);
        Circle kolo = new Circle(3);
        Triangle trojkat = new Triangle(3,4,5,2.4);
        List<Shape> figury = new ArrayList<Shape>();

        figury.add(prostokąt);
        figury.add(kwadrat);
        figury.add(kolo);
        figury.add(trojkat);


        for (Shape x : figury) {
            System.out.println(x.getArea());
            System.out.println(x.getPerimeter());
        }
    }
}
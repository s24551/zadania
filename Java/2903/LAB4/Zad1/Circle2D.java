package com.company;

public class Cricle2D {
    private double x;
    private double y;
    private double radius;

    public Cricle2D() {      //konstruktor bezargumentowy
        x = 0;
        y = 0;
        radius = 1;
    }

    public Cricle2D(double x, double y, double radius) {        //konstruktor argumentowy
        this.x = x;
        this.y = y;
        this.radius = radius;
    }


   /* public double getArea() {
        return Math.PI*(pow(double x, 2);
    }
*/
    public double getPerimeter()            //getter
    {
        return (2*(Math.PI)*radius);
    }

    public double getArea(){
        return ((Math.PI)*(radius*radius));
    }

}

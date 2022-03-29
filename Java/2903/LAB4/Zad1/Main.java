package com.company;

public class Main {

    public static void main(String[] args) {
        Cricle2D  kolo1 = new Cricle2D();
        Cricle2D kolo2 = new Cricle2D(1, 1, 3);
        System.out.println("Obwody:");
        System.out.println(kolo1.getPerimeter());
        System.out.println(kolo2.getPerimeter());
        System.out.println("Pola:");
        System.out.println(kolo1.getArea());
        System.out.println(kolo2.getArea());
    }
}

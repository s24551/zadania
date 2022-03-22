package com.company;

public class Main {

    public static void main(String[] args) {
        Garnek garnek = new Garnek(5, 10, "Srebrny");//przypisanie wartosci do konstruktora argumentowego

        System.out.println(garnek.kolor);
        System.out.println(garnek.srednica);
        System.out.println(garnek.wysokosc);
    }
}

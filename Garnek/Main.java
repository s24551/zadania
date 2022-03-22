package com.company;

import java.sql.SQLOutput;

public class Main {

    public static void main(String[] args) {
        Garnek garnek = new Garnek(5, 10, "Srebrny");   //przypisanie wartosci do konstruktora argumentowego

        System.out.println(garnek.kolor);
        System.out.println(garnek.srednica);
        System.out.println(garnek.wysokosc);


        String wiadomosc = garnek.gotuj();  //przypisanie zwrotu z metody gotuj w klasie garnek do stringa wiadomosc
        System.out.println(wiadomosc);


        String czySol = garnek.gotuj(false); //przypisanie wartosci do metody czySol w klasie Garnek
        System.out.println(czySol);

        garnek.bezInfo(); //wywolanie void metod
    }
}

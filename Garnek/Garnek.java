package com.company;

public class Garnek {
    int wysokosc;  //pola o nazwie wysokosc
    int srednica;
    String kolor;

    public Garnek(){        //konstruktor bezargumentowy

    }

    public Garnek(int srednica,int wysokosc, String kolor){   //konstruktor argumentowy
        this.srednica=srednica;
        this.wysokosc=wysokosc;
        this.kolor=kolor;
    }

    public String gotuj(){ //stworzenie metody
    return "Gotowanie w trakcie";   //instrukcja metody
    }

    public String gotuj(boolean czySol)  //stworzenie metody przyjmujacej argument
    {
        if(czySol){
            return "Gotownaie z Sola";
        }else{
            return "Gotowanie bez soli";
        }
    }
    public void bezInfo(){
        wlaczGarnek();
        gotojPrzezPolGodziny();
        wylaczGarnek();
    }
public void wlaczGarnek(){  //stworzenie metody ktora nie zwraca zadnej informacji
    System.out.println("Wlacz garnek");
}
public void gotojPrzezPolGodziny(){
    System.out.println("Gotowanie przez 30 minut");
}

public void wylaczGarnek(){
    System.out.println("Wylaczanie garnka");
}
}


package lab08.zad4;

import java.util.Scanner;

public class Main {
    Scanner sc = new Scanner(System.in);
    String imie = sc.nextLine();
    String nazwisko = sc.nextLine();
    int rokUrodzenia = sc.nextInt();

    public Main(String imie, String nazwisko, int rokUrodzenia) {
        this.imie = imie;
        this.nazwisko = nazwisko;
        this.rokUrodzenia = rokUrodzenia;
    }

}

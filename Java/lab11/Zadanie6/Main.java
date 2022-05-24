package poj.lab11.Zadanie6;

import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class Main {


    public static void main(String[] args) {
unikalneLiczby();
    }




    public static Set<Integer> unikalneLiczby(){
        int suma = 0;
        Set<Integer> liczby = new TreeSet<>();
        Scanner scanner = new Scanner(System.in);
        int liczba;

        while (liczby.size()<10) {
            System.out.printf("Podaj liczbe %d\n", liczby.size() + 1);
            liczba = scanner.nextInt();
            if (liczby.contains(liczba)) {
                System.out.println("Zawiera sie");
            }else{
                liczby.add(liczba);
                suma+=liczba;
            }

        }
        System.out.println("Suma wynosi " + suma);
        return liczby;
    }
}

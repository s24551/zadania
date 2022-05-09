package lab08.zad1;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Dodawanie = +\n" + "Odejmowanie = -\n" + "Mnozenie = *\n" + "Dzielenie = /\n" + "Co chcesz robic: \n");
        String c = sc.nextLine();
        System.out.println("Podaj liczby: ");
        String a = sc.nextLine();
        String b = sc.nextLine();

        if(c.equals("+")){
            try {
                int number = Integer.parseInt(a);
                int number2 = Integer.parseInt(b);
                int wynik = number + number2;
                System.out.println("Wynik to: " + wynik);
            } catch(NumberFormatException e) {
                e.printStackTrace();
                System.err.println("Podano zle dane.Podaj tylko liczby");
            }

        }
        else if(c.equals("-")){
            try {
                int number = Integer.parseInt(a);
                int number2 = Integer.parseInt(b);
                int wynik = number - number2;
                System.out.println("Wynik to: " + wynik);
            } catch(NumberFormatException e) {
                e.printStackTrace();
                System.err.println("Podano zle dane.Podaj tylko liczby");
            }

        }
        else if(c.equals("*")){
            try {
                int number = Integer.parseInt(a);
                int number2 = Integer.parseInt(b);
                int wynik = number * number2;
                System.out.println("Wynik to: " + wynik);
            } catch(NumberFormatException e) {
                e.printStackTrace();
                System.err.println("Podano zle dane.Podaj tylko liczby");
            }

        }
        else if(c.equals("/")){
            try {
                int number = Integer.parseInt(a);
                int number2 = Integer.parseInt(b);
                int wynik = number / number2;
                System.out.println("Wynik to: " + wynik);
            } catch(NumberFormatException e) {
                e.printStackTrace();
                System.err.println("Podano zle dane.Podaj tylko liczby");
            }
        }
        else{
            throw new IllegalArgumentException("Podano zly znak. Podaj + lub - lub * lub /");
        }
    }
}
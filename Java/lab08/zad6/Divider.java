package lab08.zad6;
import javax.swing.*;

public class Divider {
    public static void main(String[] args) {

        try {
            String number = JOptionPane.showInputDialog(null, "Podaj liczbę");
            String divider = JOptionPane.showInputDialog(null, "Podaj dzielnik");
            int result = convertToInteger(number)/convertToInteger(divider);
            JOptionPane.showMessageDialog(null, String.format("Wynik dzielenia to %d", result));
        } catch(NumberFormatException e) {
            e.printStackTrace();
            System.err.println("Blad, mozesz podac tylko liczby");
        } catch (ArithmeticException e){
            e.printStackTrace();
            System.err.println("Blad, nie mozna dzielic przez zero");
        }

    }


    private static int convertToInteger(String number){
        return Integer.parseInt(number);
    }
}

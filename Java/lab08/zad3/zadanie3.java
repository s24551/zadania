package lab08.zad3;

import java.io.FileNotFoundException;
import java.io.IOException;

public class zadanie3 {
    public static void main(String[] args) {
        try {
            wyjatek();
        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("costamcostam");
        }
    }
    public static void wyjatek() throws IOException, FileNotFoundException {
        throw new IOException("Brak pliku!"); //interesujace mnie wyjatki po przecinkach

    }

}

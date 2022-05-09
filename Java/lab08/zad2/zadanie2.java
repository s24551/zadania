package lab08.zad2;


public class zadanie2 {
    public static void main(String[] args) {
            try {
                wyjatek();
            } catch (RuntimeException e) {
                e.printStackTrace();
            }
        }
        public static void wyjatek() throws RuntimeException{
            throw new RuntimeException("Podaj imie i nazwisko"); //interesujace mnie wyjatki po przecinkach

        }

    }


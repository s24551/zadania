package lab08.zad4;

public class Osoba {
    private String imie;
    private String nazwisko;
    private int rokUrodzenia;

    public Osoba(String imie, String nazwisko, int rokUrodzenia) throws Exception {
        this.imie = imie;
        this.nazwisko = nazwisko;
        this.rokUrodzenia = rokUrodzenia;
        if (imie.equals("") || nazwisko.equals("")) {
            throw new Exception("Bledne dane. Nie udalo sie utworzyc obiektu");
        }
    }

    @Override
    public String toString() {
        return "Osoba{" +
                "imie='" + imie + '\'' +
                ", nazwisko='" + nazwisko + '\'' +
                ", rokUrodzenia=" + rokUrodzenia +
                '}';
    }
}
package lab07.zad2;

public class Main {
    public static void main(String[] args) {

        Xbox xbox = new Xbox();
        XboxGame xboxGame = new XboxGame("Forza 4");
        xbox.playGame(xboxGame);

        Playstation playstation = new Playstation();
        PlaystationGame playstationGame = new PlaystationGame("SpiderMan");
        playstation.playGame(playstationGame);

        xbox.playGame(playstationGame);
        playstation.playGame(xboxGame);
    }
}

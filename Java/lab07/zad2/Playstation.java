package lab07.zad2;

public class Playstation extends GameConsole{

    @Override
    public void playGame(Game game) {

        if(game.type != GameType.PLAYSTATION){

            System.out.println(game.name + " to nie jest gra na PS!!!");
        } else {

            System.out.println("Gramy w " + game.name);
        }
    }
}

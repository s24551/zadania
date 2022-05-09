package lab07.zad2;

public class Xbox extends GameConsole{

    @Override
    public void playGame(Game game) {

        if(game.type != GameType.XBOX){

            System.out.println(game.name + " to nie jest gra na Xbox!!!");
        } else {

            System.out.println("Grmay w " + game.name);
        }
    }
}

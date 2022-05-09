package lab08.zad5;

public class InsufficientFundsException extends Exception{
    @Override
    public String getMessage() {
        return "Not enough funds.";
    }
}

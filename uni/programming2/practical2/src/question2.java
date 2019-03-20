import uulib.Console;

/**
 *
 * @author csp18req
 */
public class question2 {

    public static void main(String[] args) {
        int coin = Console.getInt("Enter coin value in pence or 0 to exit");
        while (coin != 0) {
            System.out.println(coinPrinter(coin));
            coin = Console.getInt("Enter coin value in pence or 0 to exit");
        }
    }

    public static String coinPrinter(int coin) {
        String value = "";
        switch (coin) {
            case 1: 
                value = "One penny";
                break;
            case 2:
                value = "Two pence";
                break;
            case 5:
                value = "Five pence";
                break;
            case 10:
                value = "Ten pence";
                break;
            case 20:
                value = "Twenty pence";
                break;
            case 50:
                value = "Fifty pence";
                break;
            case 100:
                value = "One pound";
                break;
            case 200:
                value = "Two pounds";
                break;
            default: 
                value = "Invalid coin: " + coin;
        }
        return value;
    }
}

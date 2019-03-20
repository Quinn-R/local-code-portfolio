import uulib.Console;

/**
 *
 * @author csp18req
 */

// repl.it assignment. get int input from user and return string value of correct coin value
public class getCoins {
    
    public static String getCoinValue(int coin) {
        String answer = "invalid " + coin;
        
        if(coin == 1) {
            answer = "one penny";
            return answer;
        } else if(coin == 2) {
            answer = "two pence";
            return answer;
        } else if(coin == 5) {
            answer = "five pence";
            return answer;
        } else if(coin == 10) {
            answer = "ten pence";
            return answer;
        } else if(coin == 20) {
            answer = "twenty pence";
            return answer;
        } else if(coin == 50) {
            answer = "fifty pence";
            return answer;
        } else if(coin == 100) {
            answer = "one pound";
            return answer;
        } else if(coin == 200) {
            answer = "two pounds";
            return answer;
        }
        
        return answer;
    }
    
    public static void main(String[] args) {
        int coin = Console.getInt("enter a coin");
        
        while(coin != 0) {
            Console.println(getCoinValue(coin));
            coin = Console.getInt("enter a coin");
        }
    }
    
}

import uulib.Console;

/**
 *
 * @author csp18req
 */

// generate random numbers until two values are equal
public class SnakeEyes {
    
     public static int rand (int min, int max) {
         int answer = (int) ( Math.random() * max + min);
         
         return answer;
     }
    
    public static void main (String[] args) {
        int roll1 = 1;
        int roll2 = 0;
        
        while(roll1 != roll2) {
            roll1 = rand(1, 6);
            roll2 = rand(1, 6);
            
            Console.println(roll1 + ", " + roll2);
        }
        
        Console.println("Snake Eyes!");
    }
    
}

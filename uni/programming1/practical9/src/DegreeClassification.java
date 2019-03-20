import uulib.Console;

/**
 *
 * @author csp18req
 */

// tutorial q1
public class DegreeClassification {
    
    public static void main(String[] args) {
        int input = Console.getInt("Enter an average grade");
        
        while(input != 0) {
            if(input >= 1 && input <= 39) {
                Console.println("fail");
            } else if(input >= 40 && input <= 49) {
                Console.println("3rd");
            } else if(input >= 50 && input <= 59) {
                Console.println("2.2");
            } else if(input >= 60 && input <= 69) {
                Console.println("2.1");
            } else if(input >= 70 && input <= 100) {
                Console.println("1st");
            } else {
                Console.println("invalid");
            }
            
            input = Console.getInt("Enter an average grade");
        }
    }
    
}

import uulib.Console;
import uulib.GUI;

/**
 *
 * @author csp18req
 */

public class Greeting {
    
    public static void main(String[] args) {
        
        // initialise variable with user input
        String name = Console.getString("Please enter your name");
        
        // print the greeting message
        Console.println("Hello " + name + ", Nice to meet you!");
        
    }
    
}

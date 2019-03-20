import uulib.Console;

/**
 *
 * @author csp18req
 */
public class question3 {
    public static void main(String[] args) {
        int input = Console.getInt("Please enter a number? ");
        
        if(input == 0) {
            Console.println("The number entered is " + input + " and is therefore zero");
        } else if(input % 2 == 0) {
            Console.println("The number entered is " + input + " and is therefore Even");
        } else if(input % 2 == 1) {
            Console.println("The number entered is " + input + " and is therefore Odd");
        }
    }
}

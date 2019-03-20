import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//times tables between 1 - 12 with added challenge as specified in the notes.
public class TimesTables {
    
    public static void main(String[] args) {
        //initialise variables
        int input = 0;
        int count = 0;
        
        //input while loop
        while(! (input <= 12 && input >= 1)) {
            input = Console.getInt("Enter a number between 1 - 12");
        }
        
        //times table loop
        while(count != 12) {
            count ++;
            Console.println(input + " * " + count + " = " + input * count);
        }
    }
    
}

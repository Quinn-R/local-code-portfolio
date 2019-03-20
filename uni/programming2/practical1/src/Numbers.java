import uulib.Console;
import uulib.GUI;

/**
 *
 * @author csp18req
 */
public class Numbers {
    
    public static void main(String [] args) {
        int min = Console.getInt("Enter Min Value"), max = Console.getInt("Enter Max Value");
        
        int count = min;
        
        while(count <= max) {
            Console.println(count);
            count++;
        }
    }
    
    /*
    public static void main(String [] args) {
        int min = 1, max = 10;
        
        int count = min;
        
        while(count <= max) {
            Console.println(count);
            count++;
        }
    }
    */
    
}

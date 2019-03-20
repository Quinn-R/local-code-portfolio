import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//complete the provided main method
public class Multipleof3 {
    
    public static void main(String[] args) {
        
        /*
        #Steps to take.
        input an integer
        output if multiple of 3 (use expression n % 3 == 0)
        */
        
        //initialaisation of integer through input
        int input = Console.getInt("Enter a number");
        
        //check if input is multiple of 3
        
        if(input % 3 == 0) {
            Console.println(input + " is a multiple of 3");
        }else{
            Console.println(input + " is not a multiple of 3");
        }
        
    }
    
}

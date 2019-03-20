import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//a clone of ChangeCalc with modified input and output for repl.it
public class Purchase1 {
    
    public static void main(String[] args) {
        
        /*
        #program steps
        input tendered sum
        input sale sum
        check if tendered sum meets sale sum
        if true then calculate change
        output result
        */
        
        //initialise integers with input
        float saleSum = Console.getFloat("Enter price");
        float tenderedSum = Console.getFloat("Enter tender");
        
        if(tenderedSum == saleSum) {
            Console.println("No change due");
        } else if(tenderedSum >= saleSum) {
            Console.println("Your change is £" + String.format("%.2f", (tenderedSum - saleSum)));
        } else {
            Console.println("A further £" + String.format("%.2f", (saleSum - tenderedSum)) + " is required");
        }
        
    }
    
}

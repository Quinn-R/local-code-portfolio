import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//decide if change is sufficient and calculate change
public class ChangeCalc {
    
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
        float tenderedSum = Console.getFloat("Enter the tendered sum");
        float saleSum = Console.getFloat("Enter the sale sum");
        Console.println();
        
        if(tenderedSum >= saleSum) {
            Console.println("Sufficient tender");
            Console.println("Change is: " + String.format("%.2f", (tenderedSum - saleSum)));
        } else {
            Console.println("Insufficient tender");
            Console.println("required funds are: " + String.format("%.2f", (saleSum - tenderedSum)));
        }
        
    }
    
}

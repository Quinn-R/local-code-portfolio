import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//calculate architects's fee
public class ArchitectsFee {
    
    public static void main(String[] args) {
        
        //initialise integers with input
        float fCost = Console.getFloat("Enter the building cost");
        float fFee = 0;
        Console.println();
        
        if(fCost >= 50000) {
            
            fFee = fFee + (50000 * 0.08f);
            fCost = fCost - 50000;
            
            if(fCost <= 80000) {
                fFee = fFee + (fCost * 0.03f);
            } else if(fCost > 80000) {
                fFee = fFee + (fCost * 0.02f);
            }
            
            Console.println("The architect's fee is £" + String.format("%.2f", fFee));
        } else {
            Console.println("Building cost does not exceed £50000");
        }
        
    }
    
}

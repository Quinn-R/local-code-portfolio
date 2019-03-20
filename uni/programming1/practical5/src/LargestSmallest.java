import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//choose the largest and smallest number out of a range of numbers
public class LargestSmallest {
    
    public static void main(String[] args) {
        
        /*
        #program steps
        input 3 numbers
        calculate largest and smallest numbers
        output result
        */
        
        //initialise integers with input
        int n1 = Console.getInt("Enter value 1");
        int n2 = Console.getInt("Enter value 2");
        int n3 = Console.getInt("Enter value 3");
        int temp, temp2;
        
        Console.println();
        
        //calculate largest number
        temp = n1;
        
        if(n2 > temp) {
            temp = n2;
        } 
        if(n3 > temp){
            temp = n3;
        }
        
        //calculate smallest number
        temp2 = n1;
        
        if(n2 < temp2) {
            temp2 = n2;
        } 
        if(n3 < temp2){
            temp2 = n3;
        }
        
        //output result
        Console.println("The largest number is: " + temp);
        Console.println("The smallest number is: " + temp2);
        
    }
    
}

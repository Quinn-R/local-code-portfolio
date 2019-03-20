import uulib.Console;

/**
 *
 * @author csp18req
 */

// a method rendition of the LargestSmallest program ...Sorta :)
public class Largest {
    
    // value method returning larger of two parameters
    public static int larger(int a, int b) 
    {
        int answer;
        
        if(a > b) {
            answer = a;
        } else { 
            answer = b;
        }
        
        return answer;
    }
    
    public static void main (String[] args) {
        int largest = 0;
        int num = -1;
        
        while (num != 0) {
            num = Console.getInt("Enter number");
            
            if(num == 0)
                break;
            else
                largest = larger(num, largest);
        }
        
        Console.println(largest + " was largest");
    }
    
}

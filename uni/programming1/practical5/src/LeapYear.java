import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//Leap year calculator
public class LeapYear {
    
    public static void main(String[] args) {
        
        /*
        #program steps
        input year
        decide if it is a leapyear
        output result
        */
        
        //initialise integers with input
        int year = Console.getInt("Enter a year");
        
        //check if year is leapyear
        if(year % 100 == 0 && year % 400 == 0) {
            Console.println("The year " + year + " is a leapyear");
        } else if(year % 100 == 0) {
            Console.println("The year " + year + " not a leapyear");
        } else if(year % 4 == 0) {
            Console.println("The year " + year + " is a leapyear");
        } else {
            Console.println("The year " + year + " not a leapyear");
        }
        
    }
    
}

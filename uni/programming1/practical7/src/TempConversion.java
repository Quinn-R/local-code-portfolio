import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//sentinal loop modification
public class TempConversion {

    public static void main(String[] args) {
        //declare/initialise variables
        final double CONVFACTOR = 9.0 / 5.0;   // conversion factor
        int celsius = 0;
        double fahrenheit;
        
        //start sentinel loop
        while(celsius != -99) {
                
            
            // input celsius   
            celsius = Console.getInt("Temperature in Celsius");
            
            // calculate fahrenheit 
            fahrenheit = CONVFACTOR * celsius + 32;
            
            // print results 
            System.out.println(celsius + "C is " + String.format("%.1f", fahrenheit) + "F");
        }

    }
}

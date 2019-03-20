import uulib.Console;

/**
 *
 * @author csp18req
 */
public class question5 {
    public static void main(String[] args) {
        System.out.printf("%.2f", CelciusToFahrenheit(Console.getInt("Please enter celsius")));
    }
    
    public static double CelciusToFahrenheit(double Celsius) {
        double fahrenheit = 9.0/5 * Celsius + 32;
        
        if(Celsius < 3) {
            Console.println("Warning... Frost alert!!");
        }
        
        return fahrenheit;
    }
}

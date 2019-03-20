import uulib.Console;

/**
 *
 * @author csp18req
 */
public class CalcVat2 {
    
    public static void main(String[] args) {
        
        double price = 0, vat = 1.20, answer = 0;
        
        price = Console.getDouble("Please enter the value in £ that you want vat to be added to");
        
        Console.println();
        
        answer = price * vat;
        
        Console.println("The value plus vat is " + String.format("%.2f", answer));
        
    }    
}

import uulib.Console;

/**
 *
 * @author csp18req
 */

public class CountChange {
    
    public static void main(String[] args) {
        
        // variable declaration
        int pounds_2, pounds_1, pence_50, pence_20, pence_10, pence_5, pence_2, pence_1;
        float answer = 0.00f;
        
        // user input
        pounds_2 = Console.getInt("£2");
        pounds_1 = Console.getInt("£1");
        pence_50 = Console.getInt("50p");
        pence_20 = Console.getInt("20p");
        pence_10 = Console.getInt("10p");
        pence_5 = Console.getInt("5p");
        pence_2 = Console.getInt("2p");
        pence_1 = Console.getInt("1p");
        
        // calculations
        answer = answer + (pounds_2 * 2);
        answer = answer + (pounds_1 * 1);
        answer = answer + (pence_50 * 0.50f);
        answer = answer + (pence_20 * 0.20f);
        answer = answer + (pence_10 * 0.10f);
        answer = answer + (pence_5 * 0.05f);
        answer = answer + (pence_2 * 0.02f);
        answer = answer + (pence_1 * 0.01f);
        
        // output to user
        Console.print("Total change is " + String.format("%.2f", answer));
    }
    
}

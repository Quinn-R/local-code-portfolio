import uulib.Console;

/**
 *
 * @author csp18req
 */

// the tax program from tutorial 9 but with methods
public class TaxWithMethods {
    
    public static int getVat() {
        int vat_code = -1;
        
        //loop to get correct vat code from user
        while(vat_code < 0 || vat_code > 2) {
            vat_code = Console.getInt("Invalid Vat Code. Enter vat Code 0,1,2");
            
        }
        
        return vat_code;
    }
    
    public static double convertVatCode(int vat_code) {
        double vat_rate = 0;
        
        if (vat_code == 2) {
            vat_rate = 17.5;  // standard vat rate
        } else if (vat_code == 1) {      
            vat_rate = 5.0;   // reduced vat rate
        } else {      
            vat_rate = 0.0;   // all other codes are zero rate
        }
        
        return vat_rate;
    }
    
    public static void printResults(String customer_name, double purchase_amount, double vat_amt, double total_amt) {
        Console.println("Customer : "   + customer_name);
        Console.println("Purchase(£): " + purchase_amount);
        Console.println("Vat(£): "     + String.format("%.2f",vat_amt));
        Console.println("Total (£): "  + String.format("%.2f",total_amt));

    }
    
    public static void main (String[] args) {
        
        //initialise variables
        double vat_rate;
        double vat_amt;
        double total_amt;
        
        //enter customer name and purchase amount
        String customer_name   = Console.getString("Enter name");
        double purchase_amount = Console.getDouble("Enter Amount (£)");
        
        //get valid vat input from user
        int vat_code = getVat();
        
        //convert vat code from user input into real vat figure
        vat_rate = convertVatCode(vat_code);
        
        //calculate vat
        vat_amt = purchase_amount / 100 * vat_rate;
        total_amt = purchase_amount + vat_amt;
        
        printResults(customer_name, purchase_amount, vat_amt, total_amt);

    }
    
}

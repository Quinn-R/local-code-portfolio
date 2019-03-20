/**
 *
 * @author csp18req
 */

import java.util.Scanner;

public class CalcVat 
{
    
    public static void main(String[] args) 
    {
        double price = 0, vat = 1.20, answer = 0;
        
        System.out.print("Please enter the value in £ that you want vat to be added to: ");
        
        Scanner scn = new Scanner(System.in);
        
        price = scn.nextDouble();
        
        scn.close();
        
        System.out.println();
        
        answer = price * vat;
        
        System.out.println("The value plus vat is " + answer);
        
    }
    
}

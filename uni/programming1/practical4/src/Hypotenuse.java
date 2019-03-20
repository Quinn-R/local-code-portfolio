/*import uulib.Console;*/

import java.util.Scanner;
import java.math.*;

/**
 *
 * @author csp18req
 */

public class Hypotenuse {
    
    public static void main(String[] args) {

        //declare varaiables
        double dHypotenuseSq, dAdjacentSq, dOppositeSq, dAnswer;

        //get user input and ^2 it
        Scanner scn1 = new Scanner(System.in);

        System.out.print("Enter the adjacent: ");
        dAdjacentSq = scn1.nextDouble(); 
        dAdjacentSq *= dAdjacentSq;
        System.out.print("\n\n");

        System.out.print("Enter the opposite: ");
        dOppositeSq = scn1.nextDouble(); 
        dOppositeSq *= dOppositeSq;
        System.out.print("\n\n");

        scn1.close();

        //calculate dHypotenuseSq
        dHypotenuseSq = dAdjacentSq + dOppositeSq;

        //output sqrt of dHypotenuseSq
        System.out.println("The hypotenuse of the specified right-angled triangle is: " + String.format("%.2f", Math.sqrt(dHypotenuseSq)));

    }
    
}

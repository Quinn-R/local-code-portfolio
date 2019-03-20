/**
 *
 * @author csp18req
 */

import java.util.Scanner;

public class Circumference {
    
    public static void main(String[] args) {
        double iPi = 3.14, iRadius = 4 /*0*/, iCircumference = 0, iArea = 0;
        
        /*
        System.out.print("Please enter the radius of the circle: ");
        
        Scanner scn = new Scanner(System.in);
        
        iRadius = scn.nextDouble();
        
        scn.close();
        
        System.out.println();
        */
        
        iCircumference = iPi * iRadius * 2;
        iArea = iPi * (iRadius * iRadius);
        
        System.out.println("Area: " + iArea);
        System.out.println("Circumference: " + iCircumference);
    }
    
    /*
    Teachers Tweaks
    public static void main(String[] args) {
        double iPi = 3.14, iRadius = 4 ;

        double iCircumference = iPi * iRadius * 2;
        double iArea = iPi * (iRadius * iRadius);
        
        System.out.println("Area: " + iArea);
        System.out.println("Circumference: " + iCircumference);
    }
    */
    
}

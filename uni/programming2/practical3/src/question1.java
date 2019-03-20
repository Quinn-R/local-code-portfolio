import uulib.*;
import java.lang.*; 
// import Math library 
public class question1 {
    public static void main(String[] args) {
        Console.println("volumeSphere = " + volumeSphere(Console.getDouble("Enter sphere diamater")));
        Console.println("volumeCylinder = " + volumeCylinder(Console.getDouble("Enter cylinder diamater"), Console.getDouble("Enter cylinder height")));
    }
    
    // calculate volume of sphere with specified diameter
    public static double volumeSphere(double d) {
        // code goes here
        double answer = (Math.PI * Math.pow(d, 3)) / 6;
        
        return answer;
    }
    // calculate volume of cylinder with specified  
    // diameter and height
    public static double volumeCylinder(double d, double h) {
        // code goes here
        double answer = (Math.PI * Math.pow(d, 2) * h) / 4;
        
        return answer;
    }
}
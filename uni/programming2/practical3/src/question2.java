import uulib.*;
import java.lang.*; 
// import Math library 
public class question1 {
    public static void main(String[] args) {
        GUI.show("volumeSphere = " + volumeSphere(GUI.getDouble("Enter sphere diamater")));
        GUI.show("volumeCylinder = " + volumeCylinder(GUI.getDouble("Enter cylinder diamater"), GUI.getDouble("Enter cylinder height")));
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

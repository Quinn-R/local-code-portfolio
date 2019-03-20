import uulib.GUI;

/**
 *
 * @author csp18req
 */

public class Rectangle {
    
    public static void main(String[] args) {
        
        // initialise variables with user input
        int length = GUI.getInt("Enter length");
        int breadth = GUI.getInt("Enter Breadth");
        
        // initialise variables with calculations
        int perimeter = (breadth + length) * 2;
        int area = breadth * length;
        
        // output the answers to a dialog window
        GUI.show("Area:" + area + "\nPerimeter: " + perimeter);
        
    }
    
}

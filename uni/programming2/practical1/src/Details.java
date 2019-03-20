import uulib.Console;
import uulib.GUI;

/**
 *
 * @author csp18req
 */
public class Details {
    
    public static void main(String [] args) {
        String name = GUI.getString("Enter Name");
        int age = GUI.getInt("Enter Age");
        
        GUI.show("My name is " + name + " and I am " + age + " years old\n");
    }
    
    /*
    public static void main(String [] args) {
        String name = "Quinn";
        int age = 18;
        
        Console.print("My name is " + name + " and I am " + age + " years old\n");
    }
    */
    
}

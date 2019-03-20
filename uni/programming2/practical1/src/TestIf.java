import uulib.Console;
import uulib.GUI;
import java.io.*;

/**
 *
 * @author csp18req
 */

class TestIf {
    public static void main (String [] args) throws IOException {
        int a = -4, b, c, d;
        
        if(a < 0)
            a = - a;
        
        Console.println("The value of a = " + a);
        
        b = 3 * a - 5;
        c = 4 * b - 7;
        
        Console.println("The value of b before if = " + b);
        Console.println("The value of c before if = " + c);
        
        if(b > 0) {
            b = -b + c * 2;
            c = c + 1;
        } else {
            b = b + c * 1;
            c = c - 1;
        }
        
        Console.println("The value of b after if = " + b);
        Console.println("The value of c after if = " + c);
        
    }
}
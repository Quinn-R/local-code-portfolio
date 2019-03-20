import uulib.Console;

/**
 *
 * @author csp18req
 */
public class question1 {
    public static void main(String[] args) {
        int p = 7, q = -4, r = 3 * p + 4 * q, s = 5 * p + 6 * r, t = 0;
    
        if(r > s) {
            t = p + q + r;
        } else {
            t = p + q + s;
        }
        
        Console.println("p = " + p + "\nq = " + q + "\nr = " + r + "\ns = " + s + "\nt = " + t);
    }
}

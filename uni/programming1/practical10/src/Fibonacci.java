import uulib.Console;

/**
 *
 * @author csp18req
 */

public class Fibonacci {
    
    public static int[] fillFibonacci(int fib[]) {
        fib[0] = 0;
        fib[1] = 1;
        
        for(int i = 2; i < fib.length; i++) {
            fib[i] = fib[i - 2] + fib[i - 1];
        }
        
        return fib;
    }
    
    public static String printFibonacci(int fib[]) {
        String f = ("Fibonacci sequence: ");
        
        for(int i = 0; i < fib.length; i++) {
           f += (fib[i]);
           
           if(i != fib.length - 1) {
               f += (", ");
           }
        }
        
        return f;
    }
    
    public static void main(String args[]) {
        int fib[] = new int[40];
        
        fillFibonacci(fib);
        Console.println(printFibonacci(fib));
    }
    
}

import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//simple sentinel caclulator
public class SimpleCalc {
    
    public static void main(String[] args) {
        //declare/initialise variables
        int num1 = -1, num2 = 0;
        String op;
        
        //calc loop
        while(num1 != 0) {
            num1 = Console.getInt("num1");
            op = Console.getString("op");
            num2 = Console.getInt("num2");
            
            switch(op) {
                case "+":
                    Console.println("= " + (num1 + num2));
                break;
                
                case "-":
                    Console.println("= " + (num1 - num2));
                break;
                
                case "*":
                    Console.println("= " + (num1 * num2));
                break;
                
                case "/":
                    Console.println("= " + (num1 / num2));
                break;
            }
        }
        
    }
    
}

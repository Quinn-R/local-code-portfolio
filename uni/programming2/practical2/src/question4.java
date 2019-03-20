import java.util.Scanner;

/**
 *
 * @author csp18req
 */
public class question4 {
    public static void main(String[] args) {
        Scanner scn1 = new Scanner(System.in);
        System.out.print("Please enter a number? ");
        int input = scn1.nextInt();
        scn1.close();
        
        System.out.println("");
        if(input == 0) {
            System.out.println("The number entered is " + input + " and is therefore zero");
        } else if(input % 2 == 0) {
            System.out.println("The number entered is " + input + " and is therefore Even");
        } else if(input % 2 == 1) {
            System.out.println("The number entered is " + input + " and is therefore Odd");
        }
    }
}

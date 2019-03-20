import java.util.Scanner;

/**
 
 * @author csp18req
 */
public class Temperature 
{
    
    public static void main(String[] args) 
    {
        int highTemp = 0;
        int lowTemp = 0;
        int answer = 0;
        
        Scanner scn = new Scanner(System.in);
        
        System.out.print("Enter the Highest temperature of the day: ");
        highTemp = scn.nextInt();
        
        System.out.print("\nEnter the Lowest temperature of the day: ");
        lowTemp = scn.nextInt();
        
        answer = (highTemp + lowTemp) / 2;
        
        System.out.print("\nThe average temperature of the day is: " + answer);
    }
    
}

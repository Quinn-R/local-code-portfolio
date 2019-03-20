import uulib.Console;

/**
 *
 * @author csp18req
 */

//a more advanced LargestSmallest program
public class LargestSmallest2 {
    
    public static void main(String[] args) {
        //initialise integers
        int iInputSize = 15;
        int iTemp = 0;
        int iInput[] = new int[iInputSize];
        int iAnswer[] = new int[iInputSize];
        
        //loop to get input
        for(int i = 0; i < iInputSize; i++) {
            iInput[i] = Console.getInt("Enter value " + i);
        }
        
        //loop to find largest values
        for(int i = 0; i < iInputSize; i++) {
            if(iTemp <= iInput[i]) {
                iTemp = iInput[i];
            }
        }
        Console.println("iTemp " + iTemp);
        
        //loop to arrange values
        for(int i = iTemp; i > 0; i--) {

            for(int j = 0; j < iInputSize; j++) {
                if(iInput[j] == i) {
                    Console.println(iInput[j]);
                }
            }
        }
    }
    
}

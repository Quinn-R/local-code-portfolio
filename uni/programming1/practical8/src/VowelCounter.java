import uulib.Console;

/**
 *
 * @author csp18req
 */

// count the vowels from a string of chars entered by the user.
public class VowelCounter {
    
    public static boolean isVowel (char a) {
        
        boolean b = false;
        
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            b = true;
        }
        
        return b;
        
    }
    
    public static void main (String[] args) {
        
        char input = 'z';
        int count = 0;
        
        while (input != '.') {
            input = Console.getChar("Enter character");
            
            if(input == '.')
                break;
            
            if(isVowel(input)) {
                count ++;
            }
        }
        
        Console.println(count + " vowels entered");
        
    }
    
}

import uulib.Console;

/**
 *
 * @author csp18req
 */

// eieio nursery rhyme with action and value methods
// it also has the optional question 1 inside.
public class McDonald {
    
    public static void printVerse (String ani, String snd) {
        
        Console.println(
            "Old McDonald had a farm, E-I-E-I-O \n" +
            "And on the farm he had a " + ani + ", E-I-E-I-O \n" +
            "With a " + snd + " " + snd + " here and a " + snd + " " + snd + " there \n" +
            "Here a " + snd + ", there a " + snd + ", everywhere a " + snd + " " + snd + " \n" + 
            "Old McDonald had a farm, E-I-E-I-O \n"
        );
        
    }
    
    public static String returnVerse (String ani, String snd) {
        
        return
            "Old McDonald had a farm, E-I-E-I-O \n" +
            "And on the farm he had a " + ani + ", E-I-E-I-O \n" +
            "With a " + snd + " " + snd + " here and a " + snd + " " + snd + " there \n" +
            "Here a " + snd + ", there a " + snd + ", everywhere a " + snd + " " + snd + " \n" + 
            "Old McDonald had a farm, E-I-E-I-O \n\n\n"
        ;
        
    }
    
    public static void main (String[] args) {
        
        printVerse("Cat", "Meow");
        Console.println(returnVerse("Cow", "Moo"));
        
    }
    
}

import uulib.Console;

/**
 *
 * @author quinnreilly
 */

//guess the number with added challenge as specified in the notes.
public class Guess1 {
    
    public static void main(String[] args) {
        //initialise variables
        final int numToGuess = (int) (Math.random() * 100 + 1); 
        int input = 0;
        int count = 0;
        
        //input loop
        while(input != numToGuess) {
            input = Console.getInt("Enter a guess");
            
            count ++;
            
            if(input > numToGuess) {
                Console.println("You guessed too high");
            } else if(input < numToGuess) {
                Console.println("You guessed too low");
            } else {
                Console.println("You took " + count + " guess(es) to find the correct number " + numToGuess);
            }
        }
    }
    
}

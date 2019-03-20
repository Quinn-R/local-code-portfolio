import java.util.*;
import uulib.Console;

// I had to look up the solution for this one.
// https://www.coderbyte.com/results/DeviousBard:Alphabet%20Soup:Java

/**
 *
 * @author quinnreilly
 */
public class alphabetSoup {
    public static void main(String [] args) {
        String str = "hello";
        char[] array = str.toCharArray();
        Arrays.sort(array);
        String answer = new String(array);
    }
}

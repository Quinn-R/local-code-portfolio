import uulib.Console;

/**
 *
 * @author csp18req
 */
public class Temperatures {
    
    public static int countCold(int[] temps) {
        int count = 0;
        
        for(int i = 0; i < temps.length; i++) {
            if(temps[i] < 1) {
                count ++;
            }
        }
        
        return count;
    }
    
    public static int countWarm(int[] temps) {
        int count = 0;
        
        for(int i = 0; i < temps.length; i++) {
            if(temps[i] > 10) {
                count ++;
            }
        }
        
        return count;
    }
    
    public static int averageTemp(int[] temps) {
        int count = 0;
        
        for(int i = 0; i < temps.length; i++) {
            count += temps[i];
        }
        
        count = count / temps.length;
        
        return count;
    }
    
    public static void main(String[] args) {
        int temps[] = {12, 3, 9, -2, 8, 2, 15, -3, 7, -1, 9, 4, 14, 5};
        
        Console.println(countCold(temps) + " cold nights\n" 
                + countWarm(temps) + " warm nights\n" 
                + averageTemp(temps) + " average centegrade\n");
    }
    
}

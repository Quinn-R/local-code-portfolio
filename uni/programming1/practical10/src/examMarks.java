import uulib.Console;

/**
 *
 * @author csp18req
 */

public class examMarks {
    
    public static void main(String args[]) {
        int marks[] = {56, 63, 39, 82, 48, 29, 55, 43, 77, 61, 79, 44, 67, 50};
        int countFailed = 0, countFirst = 0, average = 0;
        
        for(int i = 0; i < marks.length; i++) {
            if(marks[i] < 40) {
                countFailed ++;
            } else if(marks[i] > 69) {
                countFirst ++;
            }
            
            average += marks[i];
        }
        
        average = average / marks.length;
        
        Console.println("Failures: " + countFailed + "\n"
                + "Firsts: " + countFirst  + "\n"
                + "Average: " + average + "\n");
        
    }
    
}

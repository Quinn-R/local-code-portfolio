import uulib.Console;

/**
 *
 * @author csp18req
 */

// create a method to print out a triangle of specified length using char c
public class Triangles {
    
    public static String drawLine(int length, char c) {
        String answer = "";
        int count = 0;
        
        while(count != length) {
            answer += c;
            count ++;
        }
        
        return answer;
    }
    
    public static String drawTriangle(int height, char c) {
        String answer = "";
        int count = 0, count2 = 0, spaces = height - 1, stars = 1;
        
        while(count != height) {
            answer += drawLine(spaces, ' ');
            answer += drawLine(stars, c);
            
            answer += "\n";
            
            count ++;
            spaces --;
            stars += 2;
        }
        
        return answer;
    }
            
    public static void main(String[] args) {
        int height = Console.getInt("enter triangle height");
        char ch = Console.getChar("enter triangle char");
        
        while(height != 0) {
            Console.println(drawTriangle(height, ch));
            
            height = Console.getInt("enter triangle height");
            
            if(height == 0)
                break;
            
            ch = Console.getChar("enter triangle char");
        }
    }
    
}

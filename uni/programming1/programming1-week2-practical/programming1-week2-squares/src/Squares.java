/**
 *
 * @author csp18req
 */

public class Squares 
{
    
    public static void main(String[] args) 
    {
        //drawSquare();
        
        drawDoubleSquare();
        
        //drawLamp();
    }
    
    static void drawDoubleSquare()
    {
        drawLine();
        drawSquare();
        drawLine();
        drawSquare();
        drawLine();
    }
    
    static void drawLamp()
    {
        drawSquare();
        drawTriangle();
        drawLine();
    }
    
    static void drawSquare()
    {
        System.out.println("+---+");
        System.out.println("|   |");
        System.out.println("+---+");
    }
    
    static void drawTriangle()
    {
        System.out.println("  *  ");
        System.out.println(" * * ");
        System.out.println("*---*");
    }
    
    static void drawLine()
    {
        System.out.println("=====");
    }
    
}

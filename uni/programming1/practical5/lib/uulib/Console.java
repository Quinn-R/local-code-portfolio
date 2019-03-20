package uulib;

import java.io.*;
import java.text.*;

/**
 * Provides a simple mechanism to read Java basic types and objects 
 * from the console and print Java basic types and objects to the console. 
 *
 * @version     3.4
 * @author      Aiden McCaughey
 */

public class Console {
  public static String VERSION = "3.4";
  private static BufferedReader in;
         
  /**
   * static class initialiser which initialises BufferedReader stream 
   * (in) by connecting it to the console
   */
  static {
    in = new BufferedReader(new InputStreamReader(System.in));
  }

  /**
   * Prompt for and Read a string from the console
   * @param   prompt to display on console
   * @return  string input at console   
   */
  public static String getString(String prompt) {
      System.out.print(prompt + ": ");
      return readString();
  }

  /**
   * Prompt for and Read a char from the console
   * @param   prompt to display on console
   * @return  char input at console   
   */
  public static char getChar(String prompt) {
      System.out.print(prompt + ": ");
      return readChar();
  }

  /**
   * Prompt for and Read an int from the console
   * @param   prompt to display on console
   * @return  int input at console   
   */
  public static int getInt(String prompt) {
      System.out.print(prompt + ": ");
      return readInt();
  }

  /**
   * Prompt for and Read a float from the console
   * @param   prompt to display on console
   * @return  float input at console   
   */
  public static float getFloat(String prompt) {
      System.out.print(prompt + ": ");
      return readFloat();
  }

  /**
   * Prompt for and Read a double from the console
   * @param   prompt to display on console
   * @return  double input at console   
   */
  public static double getDouble(String prompt) {
      System.out.print(prompt + ": ");
      return readDouble();
  }
  
  /**
   * Prompt for and Read a boolean from the console
   * @param   prompt to display on console
   * @return  boolean input at console   
   */
  public static boolean getBoolean(String prompt) {
      System.out.print(prompt + ": ");
      return readBoolean();
  }
 
  /**
   * Read a string from the console
   *
   * @return  string input at console   
   */
  public static String readString() {
    String s;
        
    try {
      s = in.readLine();
    } catch (IOException e) {
      System.out.println(e);
      s = null;
    }           
    return s;
  }
                    
  /**
   * Read a character from the console
   *
   * @return  string input at console   
   */  
  public static char readChar() {
    String s;
    do {
      s = readString();
      if (s.length() != 1) {
        System.out.println("Error: Expected single char");
      }
    } while (s.length() != 1);
    return s.charAt(0);
  }

  /**
   * Read an integer from the console
   *
   * @return integer input at console     
   */  
  public static int readInt() {
    Integer i = null;
    boolean invalidNumber;
    
    do {
      invalidNumber = false;  
      try {
        i = new Integer(readString());
      } catch (NumberFormatException e) {
        System.out.println("Error: Invalid integer");
        invalidNumber = true;
      } 
    } while (invalidNumber);
    return i.intValue();
  }

  /**
   * Read a float from the console
   *
   * @return float input at console     
   */  
  public static float readFloat() {
    Float i = null;
    boolean invalidNumber;
    
    do {
      invalidNumber = false;
      try {
        i = new Float(readString());
      } catch (NumberFormatException e) {
        System.out.println("Error: Invalid float");
        invalidNumber = true;
      }
    } while (invalidNumber);  
    return i.floatValue();
  }

  /**
   * Read a double from the console
   *
   * @return double input at console     
   */
  public static double readDouble() {
    Double i = null;
    boolean invalidNumber;
    
    do {
      invalidNumber = false;    
      try {
        i = new Double(readString());
      } catch (NumberFormatException e) {
        System.out.println("Error: Invalid double");
        invalidNumber = true;
      }
    } while (invalidNumber);  
    return i.doubleValue();
  }

  /**
   * Read a boolean from the console
   *
   * @return boolean read at console    
   */
  public static boolean readBoolean() {
    Boolean ob = null;
    boolean invalidBoolean;
    
    do {
      invalidBoolean = false;    
      try {
        ob = new Boolean(readString());
      } catch (NumberFormatException e) {
        System.out.println("Error: Invalid boolean (true/false)");
        invalidBoolean = true;
      }
    } while (invalidBoolean);  
    return ob.booleanValue();
  }


  /**
   *  Print new line to output stream
   * 
   */
  public static void println() {
    /** Takes a new line in the file */
    System.out.println();
  }
    
  /**
   *  Print the string to output stream.
   *
   * @param str   String to print
   */
  public static void print(String str) {
    /** Writes the string 'str' to the file */
    System.out.print(str);
  }

  /**
   *  Print atring line to output stream, taking a new line.
   * 
   * @param str   String to print
   */
   public static void println(String str) {
    /** Writes the string 'str' to the file and takes a new line */
    System.out.println(str);
  }
  
  
  /**
   *  Print the char to output stream.
   *
   * @param c   char to print
   */
  public static void print(char c) {
    /** Writes the char 'c' to the output stream */
    System.out.print(c);
  }

  /**
   *  Print a char to output stream, taking a new line.
   * 
   * @param c char to print
   */
   public static void println(char c) {
    /** Writes the char 'c' to the output stream and takes a new line */
    System.out.println(c);
  }

  /**
   *  Print the int to output stream
   * 
   * @param i   int to print
   */
  public static void print(int i) {
    /** Writes the integer i to the file */
    System.out.print(i);
  }

  /**
   *  Print the int to output stream and take a new line
   * 
   * @param i   int to print
   */
  public static void println(int i) {
    /** Writes the integer i to the file and takes a new line */
    System.out.println(i);
  }

  /**
   *  Print the float to output stream
   * 
   * @param f   float to print
   */
   public static void print(float f) {
    /** Writes the float f to the file */
    System.out.print(f);
  }

  /**
   *  Print the float to output stream and take a new line
   * 
   * @param f   float to print
   */
   public static void println(float f) {
    /** Writes the float f to the file and takes a new line */
    System.out.println(f);
  }

  /**
   *  Print the double to output stream 
   * 
   * @param d   double to print
   */
  public static void print(double d) {
    /** Writes the double d to the file */
    System.out.print(d);
  }

  /**
   *  Print the double to output stream and take a new line
   * 
   * @param d   double to print
   */
  public static void println(double d) {
    /** Writes the double d to the file and takes a new line */
    System.out.println(d);
  }

  /**
   *  Print the object to output stream 
   * 
   * @param o   object to print
   */
  public static void print(Object o) {
    /** Writes the object o to the file */
    System.out.print(o);
  }

  /**
   *  Print the object to output stream and take a new line
   * 
   * @param o   object to print
   */
  public static void println(Object o) {
    /** Writes the object o to the file and takes a new line */
    System.out.println(o);
  }

  /**
   * Print a formatted set of objects to output stream
   * 
   * @param format  - format string
   * @param args - set of objects to print
   */
  public static void printf(String format, Object... args) {
    /** Prints a formatted set of objects */
    System.out.printf(format, args);
  }

  
  
}
		
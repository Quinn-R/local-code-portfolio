import java.io.*;
import java.util.*;

class Main {
    static CodeSprintLib csl = new CodeSprintLib();
  public static void main(String[] args) {

    // Read array from file and print
    int[] numbers = readArrayFromFile("data.txt");
    int[] a = numbers.clone();

    // Print mean for array
    System.out.println("Mean = " + meanArrayValue(a));

    // Note: should be -64451.312 for the provided array
  }

  public static void printArray(int[] array) {
    /*
      Description: prints the contents of an array to screen
      one element per line
      Parameters:  int array of values to be printed
      Returns: void
    */
    System.out.println("-----");
    for(int i = 0; i < array.length; i++){
      System.out.println( array[i] );
    }
  }
  public static int[] readArrayFromFile(String filename) {
    /*
      Description: Reads an array from file.
      Parameters:  filename of textfile.
      Returns: int array of numbers
    */
    int[] array = new int[1];

    try {
          FileReader fr = new FileReader(filename);
          BufferedReader br = new BufferedReader(fr);
          String c = br.readLine();
          Integer size = Integer.parseInt(c);
          array = new int[size];
          //System.out.println(array.length);

          for (int i=0; i< size; i++) {
            c = br.readLine();
            array[i] = Integer.parseInt(c);
            //System.out.println(array[i]);
          }
          br.close();
          fr.close();
        }
    catch (IOException e) {
          System.out.println(e);
        }
    return array;
  }

  public static double meanArrayValue(int[] array) {
    /*
      Description: Computes mean value from an array
      Parameters:  int array of values from which mean is computed
      Returns: double calculated mean value
    */

    double answer = 0.0;

    for(int i = 0; i < array.length; i++) {
        answer += array[i];
    }

    return answer / array.length;

  }
}

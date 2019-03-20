import java.io.*;
import java.util.*;

class Main {
    static CodeSprintLib csl = new CodeSprintLib();
  public static void main(String[] args) {

    // Read array from file and print
    int[] numbers = readArrayFromFile("data.txt");
    int[] b = numbers.clone();

    System.out.println("Median = " + medianArrayValue(b));

    // Answer here should be 103835.5
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

  public static double medianArrayValue(int[] array) {
    /*
      Description: Computes median value from a sorted array
      Parameters:  int array of values from which median is computed
      Returns: double calculated median value
      Note: Array must be sorted!
    */

    double middle = 0.0;
    double answer = 0.0;

    csl.bubbleSortArray(array);

    middle = array.length / 2;
    //System.out.println(middle);

    if((array.length - 1) % 2 == 0) {
        answer = array[(int)middle];
        //System.out.println((int)middle);
    } else {
        answer = (array[(int)middle - 1] + array[(int)middle ]) / 2.0;
    }

    return answer;
  }
}

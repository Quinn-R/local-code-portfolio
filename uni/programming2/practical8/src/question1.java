import java.io.*;
import java.util.*;

class Main {
    static CodeSprintLib csl = new CodeSprintLib();
  public static void main(String[] args) {

    // Read array from file and print
    int[] numbers = readArrayFromFile("data.txt");
    int[] a = numbers.clone();


    //csl.hi();

    // Print mode for array
    System.out.println("Mode = " + modeArrayValue(a));

    // Answer should be 2533620 for the provided array.
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

  public static int modeArrayValue(int[] array) {
    /*
      Description: Computes the first mode value from a sorted array
      Parameters:  int array of values from which mode is computed
      Returns: int first mode value
      Note: Array must be sorted!
    */

    csl.bubbleSortArray(array);

    // csl.printArray(array);

    int index = 0, counter = 0, counter2 = 0, answer = 0;

    for(int i = 0; i < array.length - 1; i++) {
        if(array[i] == array[i + 1]) {
            counter ++;
        } else {
            counter = 0;
        }
        if(counter > answer) {
            index = counter;
            answer = array[i];


        }
    }

    return answer;
  }
}

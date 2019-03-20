import java.io.*;
import java.util.*;

class Main {
    static CodeSprintLib csl = new CodeSprintLib();
  public static void main(String[] args) {

    // Read array from file and print
    int[] numbers = readArrayFromFile("data.txt");
    int[] b = numbers.clone();

    selectionSort(b);
    printArray(b);
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

  public static void selectionSort(int array[]) {
    for(int i = 0; i < array.length - 1; i++) {
            int index = i;
            for(int j = i + 1; j < array.length; j++) {
                if(array[j] < array[index]) {
                    index = j;
                }
            }

            int smallerNum = array[index];
            array[index] = array[i];
            array[i] = smallerNum;
        }
  }
}

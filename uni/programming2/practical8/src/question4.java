import java.io.*;
import java.util.*;

class Main {
    static CodeSprintLib csl = new CodeSprintLib();
  public static void main(String[] args) {

    // Read array from file and print
    int[] numbers = readArrayFromFile("data.txt");
    int[] a = numbers.clone();

    // selectionSort(a);

    // Search sorted array
    int key = 2844200; // 802221=index 264, 2844200=index 335
    System.out.println("Binary Search");
    System.out.println(binarySearch(a, key));

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


  public static int binarySearch(int array[], int key) {
    /*
      Description: Performs binary search on an array for a specified value
      Parameters:  int array of values and int key which item to be searched
      Returns: int indicating first location of item, or -1 in case not found
    */

    csl.bubbleSortArray(array);

    int answer = -1, left = 0, right = array.length - 1, pivot = 0;
    while(left <= right) {
        pivot = (left + right) / 2;
        if(array[pivot] == key) {
            answer = pivot;
            break;
        } else if(array[pivot] < key) {
            left = pivot + 1;
        } else {
            right = pivot - 1;
        }

    }
    return answer;
  }
}

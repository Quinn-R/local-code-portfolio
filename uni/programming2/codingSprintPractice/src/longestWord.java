import uulib.Console;
import java.util.*;

/*
brainstorm:

find the largest word from a string
create a string array
split string into array by finding non alpha chars
compare strings to find the largest

solution completed in: 14mins 56secs
i had some practice though, as I tried a different solution just before this one
*/



/**
 *
 * @author quinnreilly
 */

public class longestWord {
    public static void main(String[] args) {
        String str = "Helloeeeeeeeeeeeeeee,    thereeeeee";
        Console.println(returnLongestWord(str));
    }
    
    public static String returnLongestWord(String str) {
        char str2[] = str.toCharArray();
        String arr[] = new String[1000];
        int count = 0;
        int ans = 0;
        
        for(int i = 0; i < arr.length; i++) {
            arr[i] = "";
        }
        
        for(int i = 0; i < str2.length; i++) {
            if((str2[i] > 'a' && str2[i] < 'z') || (str2[i] > 'A' && str2[i] < 'Z')) {
                arr[count] += str2[i];
            } else {
                count++;
                while(! ((str2[i] > 'a' && str2[i] < 'z') || (str2[i] > 'A' && str2[i] < 'Z'))) {
                    i++;
                }
                i --;
            }
        }
        count = 0;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i].length() > count) {
                count = arr[i].length();
                ans = i;
            }
        }
        
        return arr[ans];
    }
}























































/*public class longestWord {
    public static void main(String[] args) {
        String str = "Hellothereeeeee";
        Console.println(returnLongestWord(str));
    }
    
    public static String createWord(char[] array, int start, int end) {
        String answer = "";
        
        for(int i = start; i < array.length; i++) {
            answer += array[i];
            if(i == end) {
                break;
            }
        }
        
        return answer;
    }
    
    public static String returnLongestWord(String str) {
        char[] array = str.toCharArray();
        String[] words = new String[2];
        int index = 0, count = 0, count2 = 0, count3 = 0, ans = 0;
        
        for(int i = 0; i < array.length; i++) {
            if((array[i] > 'a' && array[i] < 'z') || (array[i] > 'A' && array[i] < 'Z')) {
                words[count2] += array[i];
            } else {
                count2 ++;
                while(! ((array[i] > 'a' && array[i] < 'z') || (array[i] > 'A' && array[i] < 'Z'))) {
                    i++;
                }
            }
            /*if((array[i] > 'a' && array[i] < 'z') || (array[i] > 'A' && array[i] < 'Z')) {
                count ++;
            } else {
                index = i;
                count = 0;
            }
            
            if(count == 0) {
                words[count2] = createWord(array, index, count);
                count2 ++;
            }*
        }
        
        for(int i = 0; i < words.length; i++) {
            if(words[i].length() > count3) {
                count3 = words[i].length();
                ans = i;
            }
        }
        //Arrays.sort(words);
        
        
        return words[ans];
    }
}*/

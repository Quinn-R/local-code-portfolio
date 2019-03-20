import uulib.Console;

public class question1 {
	public static void main(String args[]) {
		int[] results = {45, 59, 23, 89, 94, 51, 65, 74, 23, 65, 96, 21, 44, 33, 59, 85, 49, 58, 56, 69};
		printArray(results);
                Console.println(average(results));
                bubbleSort(results);
                printArray(results);
                Console.println(highest(results));
                Console.println(lowest(results));
                Console.println(linearSearch(results, 89));
                Console.println(binarySearch(results, 89));
	}
	
	public static void printArray(int[] array) {
		String result = "";
		for(int i = 0; i < array.length; i++) {
			if(i != array.length - 1) {
				result += (array[i] + "~");
			} else {
				result += (array[i]);
			}
		}
		
		Console.println(result);
	}
        
        public static double average(int[] array) {
            double answer = 0;
            
            for(int i = 0; i < array.length; i++) {
                answer += array[i];
            }
            
            answer /= array.length;
            
            return answer;
        }
        
        public static void bubbleSort(int[] array) {
            //int[] answer = new int[array.length];
            
            for(int i = array.length - 1; i > 0; i--) {
                for(int j = 0; j < array.length - 1; j++) {
                    if(array[j] > array[j + 1]) {
                        int tmp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = tmp;
                    }
                }
            }
            
            //return answer;
        }
        
        public static int highest(int[] array) {
            int answer = 0;
            
            answer = array[array.length - 1];
            
            return answer;
        }
        
        public static int lowest(int[] array) {
            int answer = 0;
            
            answer = array[0];
            
            return answer;
        }
        
        public static int linearSearch(int[] array, int key) {
            int answer = -1;
            
            for(int i = 0; i < array.length; i++) {
                if(array[i] == key) {
                    answer = i;
                    break;
                }
            }
            
            return answer;
        }
        
        public static int binarySearch(int[] array, int key) {
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

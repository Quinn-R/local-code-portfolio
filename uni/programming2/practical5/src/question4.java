import java.util.Random;

class question4 {
    public static void main(String[] args) {
        int seed = 100;
        int[] numbers = generateRandomInts(100,seed);
        System.out.println(printArray(numbers));
        bubbleSort(numbers);
        System.out.println(printArray(numbers));
    }
    public static String printArray(int[] array) {
        String answer = "";

        for(int i = 0; i < array.length; i++) {
            if(i <= array.length - 2) {
                answer += (array[i] + "~");
            } else {
                answer += (array[i]);
            }
        }

        return answer;
    }
    public static void swap(int[] array, int posA, int posB){
        int temp = array[posA];
        array[posA] = array[posB];
        array[posB] = temp;
    }
    public static void bubbleSort(int[] array) {
        /*
        Hi! 
        If you are reading this, I was the one who sent you the alternative solution!.
        */
        for(int i = array.length - 1; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                if(array[j] > array[j + 1]) {
                    /*int tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;*/

                    swap(array, j, j + 1);
                }
                
            }
        }
    }
    public static int[] generateRandomInts(int qty, int seed) {
        int[] array = new int[qty];
        Random r = new Random(seed);

        for(int i = 0; i < array.length; i++) {
            array[i] = r.nextInt(100) + 1; // generate random number in range 1-100
        }

        return array;
    }
}

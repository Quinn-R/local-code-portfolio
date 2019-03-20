// To use this class, just type CodeSprintLib csl = new CodeSprintLib();

class CodeSprintLib {
    public static void hi() {
        System.out.println("Hello");
    }

    public static void printArray(int[] array) {
        for(int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }

    public static void printArray(char[] array) {
        for(int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }

    public static void printArray(String[] array) {
        for(int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
        }
    }

    public static void sortArray(int[] array) {
        Arrays.sort(array);
    }

    public static void bubbleSortArray(int[] array) {
        for(int i = array.length - 1; i > 0; i--) {
            for(int j = 0; j < i; j++) {
                if(array[j] > array[j + 1]) {
                    int tmp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = tmp;
                }
            }
        }
    }

    public static void selectionSortArray(int[] array) {
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

    public static int stoi(String a) {
        return Integer.valueOf(a);
    }

    public static char[] stoch(String a) {
        return a.toCharArray();
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

    public static int linearSearch(String[] array, String key) {
        int answer = -1;
        for(int i = 0; i < array.length; i++) {
            if(array[i] == key) {
                answer = i;
                break;
            }
        }
        return answer;
    }

    public static int linearSearch(char[] array, char key) {
        int answer = -1;
        for(int i = 0; i < array.length; i++) {
            if(array[i] == key) {
                answer = i;
                break;
            }
        }
        return answer;
    }
}

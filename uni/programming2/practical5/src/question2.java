import uulib.Console;

class question2 {
    public static void main(String[] args) {
        System.out.println("Create your array");
        int size = Console.getInt("How many numbers");
        int [] numbers = new int[size];
        int counter = 1;
        for(int i = 0; i < size; i++) {
            numbers[i] = Console.getInt("Enter number " + counter);
            System.out.println("");
            counter++;
        }
        System.out.println(printArray(numbers));
        swap(numbers, 0, numbers.length-1);
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
}

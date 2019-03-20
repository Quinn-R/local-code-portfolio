import uulib.Console;

class question1 {
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
}

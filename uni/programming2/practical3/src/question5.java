import uulib.Console; 

class question5 {
    public static void main(String[] args) {
        int max = Console.getInt("Enter the size of the array");
        int[] list = new int[max]; // create array

        fillArray(list); // fill array with data
        printArray(list); // print contents of array

        // calculate and print array average
        System.out.println("List Average = " + averageArray(list));
    }
    public static void fillArray(int[] list) {
        for(int i=0; i < list.length; i++)
            list[i] = Console.getInt("Enter number for position " + i);
    }
    public static void printArray(int[] list) {
        for(int i=0; i < list.length; i++)
            System.out.println("List[" + i + "] = " + list[i]);
    }
    public static int averageArray(int[] list) {
        // Complete this method
        // Method has an array called 'list' passsed as input
        // This array contains a list of integer values
        // Method should compute and return the mean
        // value using all the numbers in the array
        int answer = 0;

        for(int i = 0; i < list.length; i++) {
            answer += list[i];
        }

        answer /= list.length;
        //answer = answer / list.length;

        return answer;
    }
}

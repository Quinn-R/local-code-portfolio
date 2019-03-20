class Main {
    public static void main(String[] args) {
        int list1[] = {1,2,3,4,5};
        int list2[] = {6,7,8,9,0};
        int result[] = arrayMerge(list1, list2);
        printArray(list1);
        printArray(list2);
        printArray(result);
    }
    public static int[] arrayMerge(int[] l1, int [] l2) {
        // Complete the arrayMerge method
        // You will need to define a new array that is the length
        // of array 1 + array 2 
        // You will then need to fill the new array with the
        // values from array 1 and array 2 in order.
        // Finally, return the new array 
        // int temp[]=new int[some length];
        int[] answer = new int[l1.length + l2.length];
        int count = 0;

        for(int i = 0; i < l1.length; i++) {
            answer[count] = l1[i];
            count++;
        }

        for(int i = 0; i < l2.length; i++) {
            answer[count] = l2[i];
            count++;
        }

        return answer;
    } 
    public static void printArray(int [] list) {
        for(int i=0; i<list.length; i++)
            System.out.print(list[i]+" ");
        System.out.println("");
    }
}

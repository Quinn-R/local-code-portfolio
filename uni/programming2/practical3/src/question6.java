class question6 {
    public static void main(String[] args) {
        int[] numbers = { 8, 2, 7, 1, 4, 9, 5};
        System.out.println("Min number: " + minValue(numbers));
        System.out.println("Max number: " + maxValue(numbers));
    }
    public static int minValue(int [] list){ 
        // Complete the method so it returns the 
        // minimum number contained in the array
        int answer = list[0];

        for(int i = 0; i < list.length; i++) {
            if(list[i] < answer)
                answer = list[i];
        }

        return answer;
    } 
    public static int maxValue(int [] list){ 
        // Complete the method so it returns the 
        // maximum number contained in the array
        int answer = list[0];

        for(int i = 0; i < list.length; i++) {
            if(list[i] > answer)
                answer = list[i];
        }

        return answer;
    }
}
public class Numbers {

    public static void main(String[] args) {
        sumRange(10, 1);
    }

    public static void sumRange(int s, int e) { 
        //int s = 1;
        //int e = 10;

        int n, sum;
        if(e > s) {
            n = e - s + 1;
            sum = (n * (s + e)) / 2;
        } else {
            n = s - e + 1;
            sum = (n * (s + e)) / 2;
        }

        
        System.out.println("Answer is  "+ sum);
    }
}

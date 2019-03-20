import java.util.Random; // Random number generator class
class question2 {
    public static void main(String[] args) {
        Random ran = new Random(0); // Create random num generator object - seed=0
        int [][]a = new int[4][3]; //20 rows, 8 cols

        for(int r = 0; r < a.length; r++){
            for(int c = 0; c < a[0].length; c++){ // nested for loop to go over 2d array

                a[r][c] = ran.nextInt(10) + 1; // generate random num
                System.out.print(a[r][c] + "\t"); // tab between columns for print

            }

            System.out.println(""); // new line between rows for print
        }

        System.out.println("Row 1 sum = " + rowSum(a,1));
        System.out.println("Col 2 sum = " + colSum(a,2));
    }

    public static int rowSum(int[][] a, int x) {
        int answer = 0;

        for(int i = 0; i < a[x].length; i ++) {
            /*if(a[i].length != 0) {*/
                answer += a[x][i];
            //}
        }

        return answer;
    }

    public static int colSum(int[][] a, int y) {
        int answer = 0;

        for(int i = 0; i < a.length; i ++) {
            /*if(a[i].length != 0) {*/
                answer += a[i][y];
            //}
        }

        return answer;
    }
}
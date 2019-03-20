import java.util.Random;

class question1 {
    public static void main(String[] args) {

        Random ran = new Random(0); // Create random num generator object - seed=0
        int [][]a = new int[20][8]; //20 rows, 8 cols

        for(int r = 0; r < a.length; r++){

            for(int c = 0; c < a[0].length; c++){ // nested for loop to go over 2d array

                a[r][c] = ran.nextInt(1000) + 1; // generate random num
                System.out.print(a[r][c] + "\t"); // tab between columns for print

            }

            System.out.println(""); // new line between rows for print
        }

        System.out.println("Array max = " + array2DMax(a));
        System.out.println("Array min = " + array2DMin(a));
    }

    public static int array2DMax (int [][] a) {
        int max = a[0][0];

        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a[i].length; j++) {
                if(max < a[i][j]) {
                    max = a[i][j];
                }
            }
        }

        return max;
    }

    public static int array2DMin (int [][] a) {
        int min = a[0][0];

        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a[i].length; j++) {
                if(min > a[i][j]) {
                    min = a[i][j];
                }
            }
        }

        return min;
    }

}
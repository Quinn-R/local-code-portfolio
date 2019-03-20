import java.util.Random; // Random number generator class

class Main {
    public static void main(String[] args) {
        int [][] rowmagic = new int[][] { {1,2,3}, {-1,5,2}, {4,0,2} };
        int [][] colmagic = new int[][] { {1,-1,4,10}, {3,5,0,-6} };
        int [] rowsum = allRowSums(rowmagic);
        int [] colsum = allColSums(rowmagic);

        for(int i = 0; i < rowsum.length; i++)
            System.out.println("All rows sums = " + rowsum[i]);

        for(int i = 0; i < colsum.length; i++)
            System.out.println("All cols sums = " + colsum[i]);

        System.out.println("Is row magic = " + isRowMagic(rowmagic));
        System.out.println("Is row magic = " + isRowMagic(colmagic));
        System.out.println("Is col magic = " + isColMagic(rowmagic));
        System.out.println("Is col magic = " + isColMagic(colmagic));

    }
    public static int[] allRowSums(int[][] a){
        int [] answer = new int[a.length];
        
        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a[i].length; j++) {
                answer[i] += a[i][j];
            }
        }
        
        return answer;
    }
    public static int[] allColSums(int[][] a){
        int [] answer = new int[a.length];
        //int col = 0;
        
        for(int i = 0; i < a.length; i++) {
            for(int j = 0; j < a.length; j++) {
                answer[i] += a[j][i];
            }
            //col++;
        }
        
        return answer;
    }
    public static boolean isRowMagic(int[][] a){
        boolean isMagic = true;
        
        int [] rs = allRowSums(a);
        int val = rs[0];
        //int i = 1;
        
        for(int i = 1; i < a.length; i++) {
           if(rs[i] != val) {
               isMagic = false;
           }
        }
        
        return isMagic;
    }
    public static boolean isColMagic(int[][] a){
        boolean isMagic = true;
        
        int [] rs = allColSums(a);
        int val = rs[0];
        //int i = 1;
        
        for(int i = 1; i < a.length; i++) {
           if(rs[i] != val) {
               isMagic = false;
           }
        }
        
        return isMagic;
    }
}
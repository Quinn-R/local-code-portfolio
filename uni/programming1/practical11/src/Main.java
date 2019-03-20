import uulib.Console;

public class Main {
	
	public static boolean inOrder(int[] data) {
		boolean answer = true;
		
		for(int i = 0; i < data.length - 1; i++) {
			if(data[i] > data[i + 1]) {
				answer = false;
			}
		}
		
		return answer;
	}
	
	public static int countBelow(int val, int data[]) {
		int answer = 0;
		
		for(int i = 0; i < data.length; i++) {
			if(data[i] < val) {
				answer++;
			}
		}
		
		return answer;
	}
	
	public static boolean firstLastSame(int data[]) {
		boolean answer = false;
		
		if(data[0] == data[data.length - 1]) {
			answer = true;
		}
		
		return answer;
	}
	
	public static int divisor(int a, char op, int b) {
		int answer = 0;
		
		switch(op) {
			case '/':
				answer = a / b;
				break;
			case '%':
				answer = a % b;
				break;
		}
		
		return answer;
	}
	
	// THESE ACTION METHODS PERFORM TESTS on EACH QUESTION ABOVE

    public static void question1() {
        
        System.out.println(" \nDivisor Tests" );
        System.out.println("=============" );
        
        System.out.println( "4 / 2 == " + divisor(4, '/', 2) );
        System.out.println( "3 % 2 == " + divisor(3, '%', 2) );
        System.out.println( "3 $ 2 == " + divisor(3, '$', 2) );
        
    }
    
    public static void question2() {  
        int[] a = {1, 2, 3, 1};
        int[] b = {1, 2, 3, 4};
        
        System.out.println( "\nFirstLast Same Tests" );
        System.out.println( "====================" );
        System.out.println( arrayToString(a) + " == " + firstLastSame(a) );
        System.out.println( arrayToString(b) + " == " + firstLastSame(b) );
      
    }   
    
    public static void question3() {
        int[] a = {1, 2, 3, 1};
        int[] b = {1, 2, 3, 4};
        
        System.out.println( "\nCount Below 4" );
        System.out.println( "=============" );
        System.out.println( arrayToString(a) + " == " + countBelow(4, a) );
        System.out.println( arrayToString(b) + " == " + countBelow(4, b) );
    }
    
    public static void question4() {
        int[] a = {1, 2, 3, 1};
        int[] b = {1, 2, 3, 4};
        
        System.out.println( "\nInOrder Tests" );
        System.out.println( "=============" );
        System.out.println( arrayToString(a) + "  == " + inOrder(a) );
        System.out.println( arrayToString(b) + "  == " + inOrder(b) );
      
    }
	
	public static String arrayToString(int[] data) {
        String r = "[ ";
        for (int i=0; i<data.length; i = i + 1) {
             r = r + data[i] + " ";
        }
        return r + "]";       
    }   
	
	public static void main(String args[]) {
		//System.out.println(divisor(6, '*', 2));
		
		//int data[] = {1, 2, 3, 1};
		//System.out.println(firstLastSame(data));
		
		//int data[] = {1, 2, 3, 1};
		//System.out.println(countBelow(1, data));
		
		//int data[] = {1, 2, 3, 4};
		//System.out.println(inOrder(data));
		
		question1();
		question2();
		question3();
		question4();
	}
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author csp18req
 */
public class Swap3 {
    
    public static void main(String[] args) {
        int iA1 = 7, 
                iA2 = 9, 
                iA3 = 13;
        int iB1 = iA3, 
                iB2 = iA1, 
                iB3 = iA2;
        
        System.out.println("Before the swap... \n" + iA1 + " " + iA2 + " " + iA3);
        
        iA1 = iB1; 
        iA2 = iB2; 
        iA3 = iB3;
        
        System.out.println("After the swap... \n" + iA1 + " " + iA2 + " " + iA3);
        
    }
    
}

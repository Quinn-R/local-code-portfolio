
import uulib.Console;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author quinnreilly
 */
public class AgeInMonths {
    
    public static void main(String[] args) {
        //initialise variables
        int years = 1, months = 0, age = 0;
        
        //input and calc loop
        while(years != 0) {
            years = Console.getInt("Enter Age in Years");
            months = Console.getInt("Enter Months Since Last Birthday");
            
            age = (months + (years * 12));
            
            if(age > 500) {
                Console.println("Age in Months = " + age + " ***");
            } else {
                Console.println("Age in Months = " + age);
            }
        }
    }
    
}

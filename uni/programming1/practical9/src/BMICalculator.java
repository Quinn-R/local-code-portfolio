
import uulib.Console;

/**
 *
 * @author csp18req
 */
// bmi calculator with a test plan
public class BMICalculator {

    public static String checkBMI(float weight, float height) {
        String answer = "";

        float bmi = weight / (height * height);

        if (bmi < 20) {
            answer = "under";
        } else if (bmi > 30) {
            answer = "over";
        } else {
            answer = "normal";
        }

        return answer;
    }
    
    public static void testPlan() {
        Console.println("Got " + checkBMI (60.0f, 1.75f) + ", Expected under");//underweight 
        Console.println("Got " + checkBMI (51.5f, 1.6f) + ", Expected normal"); //normal 
        Console.println("Got " + checkBMI (64.5f, 1.6f) + ", Expected normal"); //normal 
        Console.println("Got " + checkBMI (102.0f, 1.8f) + ", Expected over"); //overweight 
        Console.println("Got " + checkBMI (97.5f, 1.9f) + ", Expected normal"); //normal
    }

    public static void main(String[] args) {
        int input = Console.getInt("Enter 0 for test or 1 for BMI calculations");

        while (input != 0 && input != 1) {
            input = Console.getInt("Enter 0 for test or 1 for BMI calculations");
        }

        if (input == 1) {
            float weight = Console.getFloat("Enter weight in KG");
            float height = Console.getFloat("Enter height in M");

            while (weight <= 0 || height <= 0) {
                weight = Console.getFloat("Enter weight in KG");
                height = Console.getFloat("Enter height in M");
            }

            Console.println(checkBMI(weight, height));
        } else {
            testPlan();
        }

    }

}

/*
Program Checklist: 

store Weight in kg and height in metres.
calculate BMI = weight / (height * height)

If result of calc is less than 20, then person is underweight. 
If result is greater than 30 then person is overweight. 
Anything in between is normal. 


*/

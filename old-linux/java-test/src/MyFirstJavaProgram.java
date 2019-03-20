public class MyFirstJavaProgram
{
    public static void main(String []args)
    {
        int a = 10, b = 15, c = 0;
        
        switch(a)
        {
            case 5:
                System.out.println("\n" + a + "\n");
            break;
            case 10:
                System.out.println("\n" + a + "\n");
            break;
            case 15:
                System.out.println("\n" + a + "\n");
            break;
            case 20:
                System.out.println("\n" + a + "\n");
            break;
            default:
                System.out.println("\n" + "Did not match any parameters" + "\n");
            break;
        }
        
        //System.out.println("\n" + c + "\n");
    }
}

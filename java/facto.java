//importing Scanner library in JAVA for input Operations
import java.util.Scanner;

public class facto
{
    public static void main(String args[])
    {
        double length,fact=1;
        System.out.println("Factorial of: ");
        Scanner input = new Scanner(System.in);
        double number = input.nextDouble();

        input.close();

        if (number<0)
        {
            System.out.println("Enter positive Number");
        }
        else
        {
            for(length=1;length <= number; length++)
            {
                fact=fact*length;
            }
            System.out.println("Factorial of "+ number +" is: "+ fact);
        }
    }
}
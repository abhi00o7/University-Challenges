import java.util.Scanner;
//create the class
public class LabMulti
    {
        public static void main(String args[])
        {
            //Creating variables
            int num1,num2;
            //taking input
            Scanner input = new Scanner(System.in);
            //input the variables
            System.out.println("\nProgram for Multiplication of two numbers\n");
            System.out.println("Enter first number : ");
            num1= input.nextInt();
            System.out.println("\nEnter Second Number :");
            num2 = input.nextInt();
            
            System.out.println("Product of "+num1+" and "+num2+" is = "+num1*num2);
            input.close();

        }
    }
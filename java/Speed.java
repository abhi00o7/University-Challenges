import java.util.Scanner;
//Creating a class
//created by abhishek kumar on <201901291308>
public class Speed
    {
        public static void main(String[] args) 
        {
             //Creating variables
             float speed,distance,time;
             //taking input
             Scanner input = new Scanner(System.in);
             //input the variables
             System.out.println("\nProgram for Calculating Distance\n");
             System.out.println("Enter Speed(in km/h) : ");
             speed= input.nextFloat();
             System.out.println("\nEnter time(in hour) :");
             time = input.nextFloat();
             input.close();
             distance = speed*time;
             System.out.println("Distance travled  "+speed+" and "+time+" is = "+distance);
        }
    }

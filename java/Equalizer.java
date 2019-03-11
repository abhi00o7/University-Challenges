import java.util.Scanner; //imporing Scanner

/**
 * Equalizer
 */
public class Equalizer {

    public static void main(String[] args) {
        int num_1,num_2;
        Scanner input = new Scanner (System.in);//Scanner Function 
        System.out.println("Enter First number: ");
        num_1 = input.nextInt();
        System.out.println("Enter Second number: ");
        num_2 = input.nextInt();
        input.close();
        //compare
        if (num_1==num_2) 
        {
            System.out.println("\nBoth are equal.");
        }
    }
}
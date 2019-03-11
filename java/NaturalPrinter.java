
/**
 * NaturalPrinter
 */
import java.util.Scanner;
 public class NaturalPrinter {

    public static void main(String[] args) {
        double number,count=0;

        Scanner input = new Scanner (System.in);
        System.out.println("Enter last number: ");
        number = input.nextDouble();
        input.close();
        System.out.println("\n");
        //print up to n
        while (number>=0) {
            System.out.println(count);
            count+=1;
            number-=1;
        }
    }
}
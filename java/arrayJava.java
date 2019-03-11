
import java.util.Scanner;
/**
 * arrayJava
 */
public class arrayJava {

    public static void main(String[] args) {
        System.out.println("Array Operations\n\n");
        Scanner input = new Scanner(System.in);
        int[] list = new int[20];

        for (int i = 0; i < 20; i++) {
            System.out.println("Enter Element");
            System.out.println("list["+i+"]");
            list[i]=input.nextInt();
        }

            for (int i = 0; i < 20; i++) {
                System.out.println(list[i]+" ");

            }
        input.close();
        int odd=0,even=0,count=0;
        //positive check
        for (int i = 0; i < 20; i++) {
            if (list[i]>0) {
                count++;
            } else {
                continue;
            }
        }
        System.out.println("Positive numbers in array= "+count);

        //negative check
        count=0;
        for (int i = 0; i < 20; i++) {
            if (list[i]<0) {
                count++;
            } else {
                continue;
            }
        }
        System.out.println("\nNegative numbers in array= "+count);
        //zero check
        count=0;
        for (int i = 0; i < 20; i++) {
            if (list[i]==0) {
                count++;
            } else {
                continue;
            }
        }
        System.out.println("\nZeros in array= "+count);
        //odd check
        //int odd=0,even=0;
        for (int i = 0; i < 20; i++) {
            if (list[i]%2==0) {
                even++;
            } else {
                odd++;
            }
        }
        System.out.println("\nEven numbers in array= "+even);
        System.out.println("\nOdd numbers in array= "+odd);

        }
    }
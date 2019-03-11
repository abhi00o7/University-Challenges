import java.util.Scanner;
/**
 * Dozen
 * abhishek kumar
 * 2017001069
 * CSE IBM
 */
public class Dozen {

    public static void main(String[] args) {
        int eggs,gross,dozen,free;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number of Eggs: ");
        eggs = input.nextInt();
        input.close();//closing the input class
        gross=eggs/144;
        free=eggs%144;
        dozen=free/12;
        free=free%12;
        System.out.println("If you have eggs then you have "+gross+" gross and "+dozen+" dozen and "+free+" left eggs");
    }
}
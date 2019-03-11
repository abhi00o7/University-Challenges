import java.util.Scanner;
/**
 * reverseArray
 */
public class reverseArray {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] list = new int[10];
        int[] list_2 = new int[10];

        for (int i = 0; i < 10; i++) {
            System.out.println("Enter Element");
            System.out.print("list["+i+"]= ");
            list[i]=input.nextInt();
        }

        System.out.println(" \n\n");

            for (int i = 0; i < 10; i++) {
                System.out.println(list[i]+" ");

            }

            //System.out.println(list[i]+" ");
                for (int j = 0; j < 10; j++) {
                    list_2[j]=list[9-j];
                }
            //printing the array 
            System.out.print(" \n\n");
            for (int i = 0; i < 10; i++) {
                System.out.println(list_2[i]+" ");

            }
        input.close();
    }
}
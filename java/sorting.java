import java.util.Scanner;
/**
 * sorting
 */
public class sorting {

    public static void main(String[] args) {
        System.out.println("Array Operations\n\n");
        //Scanner input = new Scanner(System.in);
        Scanner len = new Scanner(System.in);
        int length=0;
        int[] list = new int[length];

        //initializing an array
        System.out.println("Number of elements in an array: \n");
        length= len.nextInt();
        len.close();
        for (int i = 0; i < length; i++) {
            Scanner input = new Scanner(System.in);
            System.out.println("Enter Element");
            System.out.println("Index: list["+i+1+"]");
            list[i] = input.nextInt();
            input.close();
        }
        System.out.println("Enterd elements are :\n");
            for (int i = 0; i < length; i++) {
                System.out.print(list[i]+" ");

            }
            System.out.println("\n\n");
        //sorting
        int temp;
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                if (list[i]<list[j]) {
                    temp=list[i];
                    list[i]=list[j];
                    list[j]=temp;
                
                } else {
                    continue;
                }
            }
            for (int k = 0; k < length; k++) {
                System.out.print(list[k]+" ");
            }
            System.out.println();
        }
    }

}
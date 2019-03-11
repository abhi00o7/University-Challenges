import java.util.Scanner;
// * Associative
public class Associative {

    public static void main(String[] args) {
        int num_1,num_2,num_3;
        //to prove associative law
        Scanner input = new Scanner (System.in);
        System.out.println("Enter First number: ");
        num_1 = input.nextInt();
        System.out.println("Enter Second number: ");
        num_2 = input.nextInt();
        System.out.println("Enter Third number: ");
        num_3 = input.nextInt();
        input.close();
        //Asscociative Property
        if(num_1*(num_2*num_3)==(num_1*num_2)*num_3)
        {
            System.out.println("Associative law for multiplication Satisfies.");
        }
        if(num_1+(num_2+num_3)==(num_1+num_2)+num_3)
        {
            System.out.println("Associative law for addition Satisfies.");
        }
    }
}

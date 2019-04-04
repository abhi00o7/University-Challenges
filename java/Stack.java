/*
When an overridden method is called through a reference of parent class,
then type of the object determines which method is to be executed. 
Thus, this determination is made at run time.
*/

/**
 * DynamicMethodDispatch
 */
import java.util.*;// importing Stacks

class Stacks {

    public void Operation(){
        System.out.println("This is the SuperClass.");
    }
}
// @Override
/**
 * push extends Stacks overriding
 */
class push extends Stacks {

    public void Operation(){
        System.out.println("This is the function to perform push in Stack.");
    }
}
// @Override
/**
 * pop extends Stacks overriding
 */
class pop extends Stacks {

    public void Operation(){
        System.out.println("This is the function to perform pop in Stack.");
    }
}

// @Override
/**
 * delete extends Stacks overriding
 */
class delete extends Stacks {

    public void Operation(){
        System.out.println("This is the function to perform delete in Stack.");
    }
}

// Driver main function

/**
 * Stacks
 */
public class Stack {

    public static void main(String[] args) {
        // print the menu
        System.out.println("\t\t***Stack Menu***");
        System.out.println("\t1.PUSH\n\t2.POP\n\t3.DELETE\n\t4.exit()");
        System.out.println("\n \tEnter Your Choise: ");

        int i,value_1;
        Scanner input = new Scanner(System.in);
        i = input.nextInt();

        // This is @Override object refrence
        Stacks push = new push();
        Stacks pop = new pop();
        Stacks delete = new delete();

        switch (i) {
            case 1:
                System.out.println("Enter Value to Push");
                value_1 = input.nextInt();
                push.Operation();
                break;
            case 2:
                System.out.println("Enter Value to Push");
                // value_1 = input.nextInt();
                pop.Operation();
                break;
            case 3:
                System.out.println("Top of Stack deleted");
                // value_1 = input.nextInt();
                delete.Operation();
                break;
            case 4:
                System.exit(1);
            default:
                break;
        }

        input.close();
    }
}


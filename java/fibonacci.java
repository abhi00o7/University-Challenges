/**
 * fibonacci function to demonstrate Recursion
 */
public class fibonacci {

    static int Fibo(int n){
        if(n == 1 || n == 0){
            return 1;
        }

        else{
            return Fibo(n - 1)+Fibo(n - 2); //recursion 
        }
    }
    public static void main(String[] args) {
        // Fibo FibObject = new Fibo(10); //for the 10th fibonacci number
        for (int i = 0; i < 10; i++) {
            System.out.println(Fibo(i)); //for upto 10 fibonacci numbers
        }
    }
}
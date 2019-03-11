/**
 * OverloadMethod
 */
public class OverloadMethod {

    public static void main(String[] args) {
        System.out.println(add(10,5));
        System.out.println(add(10,5,10));
    }

    public static int add(int a,int b) {
        return (a+b);
    }

    public static int add(int a,int b,int c) {
        return (a+b+c);
    }
}
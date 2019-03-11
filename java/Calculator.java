import java.util.Scanner;

 class Calculator {

    public static void main(String[] args) {

        Scanner reader = new Scanner(System.in);
        System.out.print("Enter an operator \nAvailable operations(+, -, *, /): ");
        char operator = reader.next().charAt(0);

        // String operator = (char) System.in.read();

        System.out.print("Enter two numbers: \n");

        double first = reader.nextDouble();
        double second = reader.nextDouble();


        reader.close();

        double result;

        switch(operator)
        {
            case '+':
                result = first + second;
                break;

            case '-':
                result = first - second;
                break;

            case '*':
                result = first * second;
                break;

            case '/':
                result = first / second;
                break;

            default:
                System.out.printf("Error! operator is not correct");
                return;
        }

        System.out.println(first+" "+operator+" "+second+" "+result+" ");
        System.out.printf("%.1f %c %.1f = %.1f", first, operator, second, result);
    }
}

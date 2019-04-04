
public class CallingFun
{
  public void display(int y)
  {
    y = 450;
  }
  public static void main(String args[])
  {
    CallingFun value = new CallingFun();
    int x = 10;
    value.display(x);
    System.out.println(x);
  }
}  


// Refrence Program

public class CallByReference
{
  public void display(String S)
  {
    S = "World";
    System.out.println(S);                       // prints HelloWorld
  }
  public static void main(String args[])
  {
    CallByReference cbr = new CallByReference();
    StringBuffer sb1 = new StringBuffer("Hello");
    cbr.display(sb1);
    System.out.println(sb1);                       // prints HelloWorld
  }
} 
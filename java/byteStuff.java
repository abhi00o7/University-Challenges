// import java.io.*;
import java.util.*;
public class byteStuff
{
    public static void main(String[] args)
{
    int l;
    String f,sender;
    sender="";
    Scanner s =new Scanner(System.in);
    System.out.println("Enter: ");
    f=s.nextLine();
    l=f.length();
    for(int i = 0;i<l;i++)
    {
        if(f.charAt(i)!=' ')
        {
            sender=sender+f.charAt(i);
        }
        if(f.charAt(i)==' ')
        {
            sender=sender+'*';
        }
    }
    if(f.charAt(l-1)=='*')
    {
        sender=sender+'*'+'*';
    }
    System.out.println("user input-"+f);
    System.out.println("output-"+sender);
    s.close();
    }
}
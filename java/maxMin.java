import java.util.Scanner;
public class maxMin
{
	public static void main(String[] args) 
	{
		int[] num=new int[10];
		int min,max;
		System.out.println("Enter 10 numbers:\n");
		Scanner tem = new Scanner(System.in);
		for (int i=0 ; i<10 ; i++ )
		{
		    num[i]=tem.nextInt();
		}
		max=num[0];
		min=num[0];
		for (int i=1 ; i<10 ; i++ )
		{
		    if(max<num[i])
		        max=num[i];
		    if(min>num[i])
		        min=num[i];
        }
        tem.close();
		System.out.println("Maximum number= "+max+"\nMinimum number= "+min);
		
    }
}

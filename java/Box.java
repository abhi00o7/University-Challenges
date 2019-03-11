/**
 * Box
 * abhishek kumar
 * 2017001069
 * CSE IBM
 */
public class Box {

    private int length ,breadth ,height;

    public void setDimension(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
    }

    public void showDimension()
    {
        System.out.println("Length = "+length);
        System.out.println("Breadth= "+breadth);
        System.out.println("Height = "+height);
    }
    public static void main(String[] args)
    {
        Box smallBox=new Box();
        smallBox.setDimension(9, 8, 10);
        smallBox.showDimension();
    }
}
/**
 * Example
 static class Example 
 {
     
}
    */
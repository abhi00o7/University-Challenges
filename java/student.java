import java.io.*;

class student
 {  String name;
  public student()
  {    name = "Unknown";
  }
  public void setName (String n)
  {
    name = n;
  }
  public String getName()
  {
    System.out.println(name);
    return name;
  }
}
class Test{
  public static void main(String[] args)
  {    student a = new student();
    System.out.println(a.getName());
    a.setName("xyz");
    String b = a.getName();
    System.out.println(b);
  }
}

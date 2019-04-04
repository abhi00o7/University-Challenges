/**
 * Test
 */
class Test {

    int a,b;

    Test(int i,int j)
    {
        a = i;
        b = j;
    }

    boolean equalTo(Test O)
    {
        if (O.a == a && O.b == b)
            return true;
        
        else
            return false;
    }
}
//Next Class Demo
/**
 * Demo
 */
public class Demo {

    public static void main(String[] args) {
        Test t1 = new Test(100, 50);
        Test t2 = new Test(100, 50);
        Test t3 = new Test(10, 2);

        System.out.println(t1.equalTo(t2));
        System.out.println(t1.equalTo(t3));
    }
}
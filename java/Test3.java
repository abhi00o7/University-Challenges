/**
 * Test3
 */
public class Test3 {

    public static void swap(Integer i,Integer j) {
        Integer temp = new Integer(i);
        i = j;
        j = temp;
    }
    public static void main(String[] args) {
        Integer j = new Integer(20);
        Integer i = new Integer(10);

        swap(i,j);
        System.out.printf("i= "+i+", j= "+j);
        
    }
}

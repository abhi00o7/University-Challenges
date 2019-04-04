/**
 * Outer
 */
class Outer {

    int Outerx = 100;
    int y = 5;
    void test(){
        Inner inner = new Inner();
        inner.display();
    }
    /**
     * Inner
     */
    class Inner {
        int y = 10;

        void display(){
            System.out.println(Outerx);
        } 
    }//innerClass

    void show(){
        System.out.println(y);
    }
}//ClassOuterEnds

/**
 * NestedClass
 */
public class NestedClass {

    public static void main(String[] args) {
        
        Outer outer = new Outer();
        outer.test();
    }
}
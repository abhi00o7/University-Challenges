/**
 * Method overloading
 */
/**
 * University super class
 */ 
class University {
    void show(){
        System.out.println("University main Class.");
    }
}
/**
 * SET sub class A
 */
class SET extends University{
    void show(){
        System.out.println("Computer Science and Engineering");
    }

}
/**
 * SAP sub Class B
 */
class SAP {
    void show(){
        System.out.println("Architecture and Planning");
    }

}

// main fuction driver
public class override {

    public static void main(String[] args) {
        University ref1 = new University();
        SET ref2 = new SET();
        SAP ref3 = new SAP();

        ref1.show();
        ref2.show();
        ref3.show();
    }
}
/**
 * copyConstructor Example
 */
public class copyConst {

    int ID;
    String name;
    // normal Const.
    copyConst(int i, String s){
        ID = i;
        name = s;
    }

    // Copy Constructor
    copyConst(copyConst ct){
        ID = ct.ID;
        name = ct.name;
    }

    // Display Function
    void Display(){
        System.out.println(ID+"  "+name);
    }
public static void main(String[] args) {

    // pass the object of sample constructor to copy values
    copyConst ct1 = new copyConst(1,"Example_1");
    copyConst ct2 = new copyConst(ct1);

    ct1.Display();
    ct2.Display();
}
}

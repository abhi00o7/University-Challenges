/**
 * data Abstraction
 */
abstract class animal{

    abstract void show();
}

class dog extends animal(){
    void show(){
        System.out.println("Dog barks");
    // return 0;
    }
}
abstract class panda extends animal{

    abstract void show();
}

 public class abst{

    public static void main(String[] args) {
        
        animal ref1 = new animal();
        animal ref2 = new dog();
        animal ref3 = new panda();

        System.out.println("Data Abstraction \n\n")
        ref1.show();
        ref3.show();
        ref2.show();

    }
}
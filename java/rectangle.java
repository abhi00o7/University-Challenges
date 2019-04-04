/**
 * PS3_2
 */
public class rectangle {

    int length;
    int breadth;
    int var=10;

    rectangle(){
        System.out.println("value of Length and breadth is Zero.");
    }
        rectangle(int a){
        this.length = this.breadth = 45; 
    }
    rectangle(int length,int breadth){
        this.length = var;
        this.breadth = var; 
    }

    // public void display();
}
// main 
public static void main(String[] args) {
    
    rectangle obj = new rectangle();
}
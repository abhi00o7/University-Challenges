/**
 * CopyConstructor
 */
/**
 * Data
 */
class Data {

    int data1,data2;

    Data(int d1, int d2){
        data1 = d1;
        data2 = d2;

    }

    Data(Data obj){
        data1 = obj.data1;
        data2 = obj.data2;
    }

    void showData(){
        System.out.println(data1);
        System.out.println(data2);

        // return FALSE;
    }

}


 public class CopyConstructor {

    public static void main(String[] args) {
        Data ob1 = new Data(10,20);
        ob1.showData();

        Data ob2 = new Data(ob1);
        ob2.showData();
    }
}
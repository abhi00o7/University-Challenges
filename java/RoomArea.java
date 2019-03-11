/**
 * Room
 */
class Room{

    int length;
    int breadth;

    void getData(int a,int b)
    {
        length =a;
        breadth =b;
    }
}

/**
 * RoomArea
 */

public class RoomArea {

    public static void main(String[] args) {
        int area;
        Room r1 = new Room(); //creates an object r1
        r1.getData(14,15);
        area= r1.length*r1.breadth;
        System.out.println("area= "+area);

    }
}
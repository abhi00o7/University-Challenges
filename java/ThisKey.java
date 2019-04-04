/**
 * ThisKey
 */
public class ThisKey {
    
        double length;
        double breadth;
        final double pi = 3.14; 
    double Area(double length){
            this.length = length;
            return(length*length*pi);
        }
    
        double Area(double breadth, double length){
            this.breadth = breadth;
            this.length = length;
            return(breadth*length);
        }

        public static void main(String[] args) {
            
            ThisKey add = new ThisKey();
            System.out.println("Area of Circle "+add.Area(5));
            System.out.println("Area of Rectangle "+add.Area(112,5));

        }
}
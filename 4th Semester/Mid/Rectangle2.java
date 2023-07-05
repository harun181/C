package Mid;

public class Rectangle2 {
    int length;
    int breadth;
    Rectangle2(){
        System.out.println("Length & Breadth are zero. ");
    }
    Rectangle2(int a, int b){
        System.out.println("Length: " + a);
        System.out.println("Breadth: " + b);
    }
    Rectangle2(int a){
        System.out.println("Length: " + a);
        System.out.println("Breadth: " + a);
    }

    public static void main(String[] args) {
        Rectangle2 s1 = new Rectangle2();
        Rectangle2 s2 = new Rectangle2(8, 9);
        Rectangle2 s3 = new Rectangle2(44);

    }
}

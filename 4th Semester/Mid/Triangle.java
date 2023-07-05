package Mid;/* Write a program to print the area and perimeter of a triangle having sides of
3, 4 and 5 units by creating a class named 'Mid.Triangle' without any parameter in
its constructor. */

public class Triangle {
    Triangle(){
        int a = 3;
        int b = 4;
        int c = 5;

        double perimeter = (a+b+c)/2;
        double area = Math.sqrt((perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c)));
        System.out.println("Perimeter: " + perimeter);
        System.out.println("Area: " + area);
    }

    public static void main(String[] args) {
        Triangle tri = new Triangle();
    }
}

package Mid;/* Write a program to print the area of a rectangle by creating a class named
'Area' having two methods. First method named as 'setDim' takes length and
breadth of rectangle as parameters and the second method named as 'getArea'
returns the area of the rectangle. Length and breadth of rectangle are entered
through keyboard. */


import java.util.Scanner;
public class Rectangle {
    void setDim(int a, int b){
        System.out.println("Length: " + a);
        System.out.println("Breadth: " + b);
    }
    void getArea(int a, int b){
        int result = a*b;
        System.out.println("Area: " + result);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Length: ");
        int a = sc.nextInt();
        System.out.println("Enter Breadth: ");
        int b = sc.nextInt();

        Rectangle n1 = new Rectangle();
        n1.setDim(a, b);
        n1.getArea(a, b);

    }
}

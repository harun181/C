package Mid;/* Method Overloading: There should be methods with same name but number and/or type of parameters must be different. */

import java.util.Scanner;
public class MethodOverloading {
    void callMethod(int a, int b){
        System.out.println(a + " " + b);
    }
    void callMethod(double d){
        System.out.println(d);
    }
    public static void main(String [] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter first int number:");
        int a = scan.nextInt();
        System.out.println("Enter second int number:");
        int b = scan.nextInt();
        System.out.println("Enter double number:");
        double d = scan.nextDouble();

        MethodOverloading n1 = new MethodOverloading();
        n1.callMethod(a, b);
        n1.callMethod(d);

//        new Mid.MethodOverloading().callMethod(a, b);
//        new Mid.MethodOverloading().callMethod(d);
    }
}

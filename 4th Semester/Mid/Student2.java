package Mid;/* Assign and print the roll number, phone number and address of two students
having names "Sam" and "John" respectively by creating two objects of class
'Mid.Student'. */

import java.util.Scanner;
public class Student2 {
    int roll;
    int phn;
    String address;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student2 Sam = new Student2();
        System.out.println("Enter roll: ");
        Sam.roll = sc.nextInt();
        System.out.println("Enter phone number: ");
        Sam.phn = sc.nextInt();
        System.out.println("Enter Address: ");
        Sam.address = sc.next();
        System.out.println("Roll No: " + Sam.roll);
        System.out.println("Phone: " + Sam.phn);
        System.out.println("Address: " + Sam.address);

        Student2 John = new Student2();
        System.out.println("Enter roll: ");
        John.roll = sc.nextInt();
        System.out.println("Enter phone number: ");
        John.phn = sc.nextInt();
        System.out.println("Enter Address: ");
        John.address = sc.next();
        System.out.println("Roll No: " + John.roll);
        System.out.println("Phone: " + John.phn);
        System.out.println("Address: " + John.address);


    }
}

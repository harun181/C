package Mid;/* Create a class named 'Mid.Student' with String variable 'name' and integer variable
'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by
creating an object of the class Mid.Student. */


import java.util.Scanner;
public class Student {
    int roll_no;
    String name;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student sInfo = new Student();
        System.out.println("Enter Mid.Student Name: ");
        sInfo.name = sc.next();
        System.out.println("Enter roll no: ");
        sInfo.roll_no = sc.nextInt();
        System.out.println("Name: " + sInfo.name);
        System.out.println("Roll No: " + sInfo.roll_no);
    }
}

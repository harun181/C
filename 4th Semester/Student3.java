/* Write a program to print the names of students by creating a Student class. If no name is
passed while creating an object of Student class, then the name should be "Unknown",
otherwise the name should be equal to the String value passed while creating object of Student
class. */


public class Student3 {
    Student3(){
        System.out.println("Unknown");
    }
    Student3(String name){
        System.out.println("Name: " + name);
    }

    public static void main(String[] args) {
        Student3 sUnknown = new Student3();
        Student3 sName = new Student3("Tutul");
    }
}

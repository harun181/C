/* We have to calculate the percentage of marks obtained in three subjects (each out
of 100) by student A and in four subjects (each out of 100) by student B. Create
an abstract class 'Marks' with an abstract method 'getPercentage()'. It is inherited
by two other classes 'A' and 'B' each having a method with the same name which
returns the percentage of the students. The constructor of student A takes the
marks in three subjects as its parameters and the marks in four subjects as its
parameters for student B. Create an object for each of the two classes and print
the percentage of marks for both the students. */

package Final;

abstract class Marks {
    abstract double getPercentage();
}

class A extends Marks {
    private int subject1, subject2, subject3;

    public A(int subject1, int subject2, int subject3) {
        this.subject1 = subject1;
        this.subject2 = subject2;
        this.subject3 = subject3;
    }

    @Override
    double getPercentage() {
        double totalMarks = subject1 + subject2 + subject3;
        return (totalMarks / 300) * 100;
    }
}

class B extends Marks {
    private int subject1, subject2, subject3, subject4;

    public B(int subject1, int subject2, int subject3, int subject4) {
        this.subject1 = subject1;
        this.subject2 = subject2;
        this.subject3 = subject3;
        this.subject4 = subject4;
    }

    @Override
    double getPercentage() {
        double totalMarks = subject1 + subject2 + subject3 + subject4;
        return (totalMarks / 400) * 100;
    }
}

public class ExamMark {
    public static void main(String[] args) {
        A studentA = new A(80, 90, 70);
        B studentB = new B(75, 85, 65, 95);

        System.out.println("Percentage of student A: " + studentA.getPercentage() + "%");
        System.out.println("Percentage of student B: " + studentB.getPercentage() + "%");
    }
}

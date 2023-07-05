/* Write a program that prints ‘HaHa’ when it face an
ArithmeticException and ‘HeHe’ when it faces an IllegalArgumentException.*/

package Final;

public class ArethematicException {
    public static void main(String[] args) {
        try {
            // Trigger an ArithmeticException
            int result = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("HaHa");
        }

        try {
            // Trigger an IllegalArgumentException
            throw new IllegalArgumentException();
        } catch (IllegalArgumentException e) {
            System.out.println("HeHe");
        }
    }
}

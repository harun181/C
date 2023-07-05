/* Write a program that allows you to access an array until a valid index is given. throw a custom Exception if
maximum retries are reached Wrap your program inside a method that throws your custom Exception in java */

package Final;

import java.util.Scanner;

class MaxRetriesExceededException1 extends Exception {
    public MaxRetriesExceededException1(String message) {
        super(message);
    }
}

public class ThrowsMax {
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        int maxRetries = array.length;

        try {
            accessArray(array, maxRetries);
        } catch (MaxRetriesExceededException1 e) {
            System.out.println(e.getMessage());
        }
    }

    public static void accessArray(int[] array, int maxRetries) throws MaxRetriesExceededException1 {
        int retries = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter an index to access the array:");

        while (retries < maxRetries) {
            int index = scanner.nextInt();

            if (index >= 0 && index < array.length) {
                System.out.println("Value at index " + index + ": " + array[index]);
                return;
            } else {
                retries++;
                System.out.println("Invalid index. Retry with a valid index:");
            }
        }

        throw new MaxRetriesExceededException1("Maximum number of retries exceeded.");
    }
}

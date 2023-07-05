/* Write a program that allows you to access an array until a valid index is given. throw a custom Exception if
maximum retries are reached in java */

package Final;

import java.util.Scanner;

class MaxRetriesExceededException extends Exception {
    public MaxRetriesExceededException(String message) {
        super(message);
    }
}

public class MaxInd {
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        int maxRetries = array.length;
        int retries = 0;

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter an index to access the array:");

        while (retries < maxRetries) {
            int index = scanner.nextInt();

            if (index >= 0 && index < array.length) {
                System.out.println("Value at index " + index + ": " + array[index]);
                break;
            } else {
                retries++;
                System.out.println("Invalid index. Retry with a valid index:");
            }
        }

        if (retries >= maxRetries) {
            try {
                throw new MaxRetriesExceededException("Maximum number of retries exceeded.");
            } catch (MaxRetriesExceededException e) {
                System.out.println(e.getMessage());
            }
        }

        scanner.close();
    }
}

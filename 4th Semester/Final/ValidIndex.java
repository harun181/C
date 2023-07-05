/* Write a program that allows you to access an array until a valid index
is given. If maximum retries exceeds array_size, prints Error. */

package Final;

import java.util.Scanner;

public class ValidIndex {
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
            System.out.println("Error");
        }

        scanner.close();
    }
}


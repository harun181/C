// Invalid Age Exception.

package Final;

import java.util.Scanner;
import java.util.NoSuchElementException;

class InvalidAgeException extends Exception {
    private int age;

    InvalidAgeException() {}

    InvalidAgeException(int age) {
        this.age = age;
    }

    @Override
    public String toString() {
        return "InvalidAgeException: " + age;
    }

    public String getMessage() {
        return "The age you entered is invalid: " + age;
    }
}

public class AgeEx {
    static void verifyAge(int age) throws InvalidAgeException {
        if (age < 0 || age > 100) {
            throw new InvalidAgeException(age);
        } else {
            System.out.println("Valid age: " + age);
        }
    }

    public static void main(String[] args) {
        int i, age;
        Scanner input = new Scanner(System.in);
        int validAges = 0;


        while (input.hasNext()) {
            try {

                age = input.nextInt();
                verifyAge(age);
                validAges++;
            } catch (InvalidAgeException e) {
                System.out.println("Exception caught: " + e.getMessage());
            } catch (NoSuchElementException e) {
                System.out.println("No more ages to enter.");
                break;
            }
        }

        System.out.println("Number of valid ages entered: " + validAges);
    }
}
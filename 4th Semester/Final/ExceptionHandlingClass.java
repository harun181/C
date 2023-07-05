class InvalidMarksException extends Exception {
    public InvalidMarksException(String message) {
        super(message);
    }
}

public class ExceptionHandlingClass {
    public static void validateMarks(int marks) throws InvalidMarksException {
        if (marks < 0 || marks > 100) {
            throw new InvalidMarksException("Invalid marks! Marks should be between 0 and 100.");
        }
        System.out.println("Marks validated successfully!");
    }

    public static void main(String[] args) {
        int marks = 120; // Example: Invalid marks
        try {
            validateMarks(marks);
        } catch (InvalidMarksException e) {
            System.out.println("Exception occurred: " + e.getMessage());
        }
    }
}
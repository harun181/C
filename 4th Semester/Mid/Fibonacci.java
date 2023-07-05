package Mid;/* Mid.Fibonacci Series */


public class Fibonacci {

    public static void main(String[] args) {
        int prev = 0, next = 1, sum, n;

        for(n = 1; n <= 10; n++) {
            System.out.print(prev+", ");
            sum = prev + next;
            prev = next;
            next = sum;
        }
    }

}
package Mid;/* Factiorial Number */

public class Factorial {

    public static void main(String[] args) {
        int n = 6, fact = 1;

        for(int i=1; i<=n; i++){
            //Mid.Factorial formula
            fact = fact*i;
        }

        System.out.println("Mid.Factorial of 6 is: " + fact);
    }

}

/* Factiorial Number */

public class Factorial {

    public static void main(String[] args) {
        int n = 6;
        int fact=1;

        for(int i=1;i<=n;i++){
            //Factorial formula
            fact = fact*i;
        }

        System.out.println("Factorial of 6 is: "+fact);
    }

}

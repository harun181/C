package Mid;

public class Bank {
    int ammount = 50;

    Bank(){
        System.out.println("Ammount: 50");
    }
    Bank(int a){
        a = a+50;
        System.out.println("Ammount: " + a);
    }

    public static void main(String[] args) {
        Bank s1 = new Bank();
        Bank s2 = new Bank(40);
    }
}

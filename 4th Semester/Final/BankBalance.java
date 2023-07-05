/* Create an abstract class 'Bank' with an abstract method 'getBalance'.
 $100, $150 and $200 are deposited in banks A, B and C respectively.
 'BankA', 'BankB' and 'BankC' are subclasses of class 'Bank', each
 having a method named 'getBalance'. Call this method by creating an
 object of each of the three classes. */

package Final;

abstract class Bank1 {
    abstract int getBalance();
}

class BankA extends Bank1 {
    private int balance = 100;

    @Override
    int getBalance() {
        return balance;
    }
}

class BankB extends Bank1 {
    private int balance = 150;

    @Override
    int getBalance() {
        return balance;
    }
}

class BankC extends Bank1 {
    private int balance = 200;

    @Override
    int getBalance() {
        return balance;
    }
}

public class BankBalance {
    public static void main(String[] args) {
        BankA bankA = new BankA();
        BankB bankB = new BankB();
        BankC bankC = new BankC();

        System.out.println("Balance in Bank A: $" + bankA.getBalance());
        System.out.println("Balance in Bank B: $" + bankB.getBalance());
        System.out.println("Balance in Bank C: $" + bankC.getBalance());
    }
}

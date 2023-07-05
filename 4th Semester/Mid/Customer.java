package Mid;

public class Customer {
    private String name;
    private String accountNumber;
    private double balance;

    public Customer(String name, String accountNumber, double balance) {
        this.name = name;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        if (name != null && !name.isEmpty()) {
            this.name = name;
        } else {
            System.out.println("Error: Name cannot be null or empty");
        }
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(String accountNumber) {
        if (accountNumber != null && !accountNumber.isEmpty()) {
            this.accountNumber = accountNumber;
        } else {
            System.out.println("Error: Account number cannot be null or empty");
        }
    }

    public double getBalance() {
        return balance;
    }
    public static void main(String[] args) {
        Customer customer = new Customer("Harun", "221002138", 1000.00);

        System.out.println("Name: " + customer.getName());
        System.out.println("Account Number: " + customer.getAccountNumber());
        System.out.println("Balance: $" + customer.getBalance());
    }

}

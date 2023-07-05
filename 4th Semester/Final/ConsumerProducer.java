/* Can you explain the functionality and synchronization of the
ConsumerProducer program, which consists of Producer and Consumer
threads interacting with the Company class to produce and consume items?
Provide an overview of the program's structure and the role of each
component, including how synchronization is achieved between producers
and consumers. */

package Final;
import java.util.logging.Level;
import java.util.logging.Logger;

class Producer extends Thread {
    private final Company company;

    public Producer(Company company) {
        this.company = company;
    }

    @Override
    public void run() {
        int i = 1;
        while (true) {
            company.produceItem(i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Producer.class.getName()).log(Level.SEVERE, null, ex);
            }
            i++;
        }
    }
}

class Consumer extends Thread {
    private final Company company;

    public Consumer(Company company) {
        this.company = company;
    }

    @Override
    public void run() {
        while (true) {
            try {
                company.consumeItem();
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                Logger.getLogger(Consumer.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}

class Company {
    private boolean isProduced;
    private int item;

    synchronized void produceItem(int item) {
        while (isProduced) {
            try {
                wait();
            } catch (InterruptedException ex) {
                Logger.getLogger(Company.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        this.item = item;
        System.out.println("Produced: " + item);
        isProduced = true;
        notify();
    }

    synchronized void consumeItem() {
        while (!isProduced) {
            try {
                wait();
            } catch (InterruptedException ex) {
                Logger.getLogger(Company.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        System.out.println("Consumed: " + item);
        isProduced = false;
        notify();
    }
}

public class ConsumerProducer {
    public static void main(String[] args) {
        Company company = new Company();
        Consumer consumer = new Consumer(company);
        Producer producer = new Producer(company);

        consumer.start();
        producer.start();
    }
}
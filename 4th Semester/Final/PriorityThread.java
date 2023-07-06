//User Defined Priority Threads

package Final;

public class PriorityThread extends Thread
{

    public void run()
    {
        System.out.println("Running");
    }

        public static void main(String [] args)
        {
            PriorityThread t1 =new PriorityThread();
            PriorityThread t2 =new PriorityThread();

            t1.setPriority(4);
            t2.setPriority(7);

            System.out.println("Priority of t1: " + t1.getPriority());
            System.out.println("Priority of t2: " + t2.getPriority());

            t1.start();
            t2.start();

        }}


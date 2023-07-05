package Mid;

class X
{
    void method(int a)
    {
        System.out.println("ONE");
    }
    void method(double d)
    {
        System.out.println("TWO");
    }
}
class Y extends X
{
    @Override
    void method(double d)
    {
        System.out.println("THREE");
    }
}
public class Inheretance
{
    public static void main(String[] args)
    {
        new Y().method(100.54);
    }
}
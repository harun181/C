package Final;

class A1 implements B1
{
    public int methodB(int i)
    {
        return i = ++i * i;
    }
}
interface B1
{
    int methodB(int i);
}
public class Main
{
    public static void main(String[] args)
    {
        B1 b = new A1();
        System.out.println(b.methodB(2));
    }
}
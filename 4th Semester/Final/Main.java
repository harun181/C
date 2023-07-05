package Final;
abstract class Calculate
{
    abstract int add(int a, int b);
}
public class Main
{
    public static void main(String[] args)
    {
        int result = new Calculate()
        {
            @Override
            int add(int a, int b)
            {
                return a+b;
            }
        }.add(11010, 022011);
    }
}
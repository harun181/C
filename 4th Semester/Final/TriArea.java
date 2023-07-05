/* Create an interface “Polygon” which consists of a default method
‘getPerimeter()’ and an abstract method ‘getArea()’. Put the implementation of
the method ‘getPerimeter()’ inside the Polygon interface. Now create a class
‘Triangle’ which inherits the above interface having a constructor initializing the
sides of the triangle. Create an object of the ‘Triangle’ class with sides as the
parameters and call the method ‘getArea()’. Calculate the area of the triangle
object. */

package Final;

interface Polygon {
    double getPerimeter();

    default void printPerimeter() {
        System.out.println("Perimeter: " + getPerimeter());
    }

    abstract double getArea();
}

class Triangle implements Polygon {
    private double sideA;
    private double sideB;
    private double sideC;

    public Triangle(double sideA, double sideB, double sideC) {
        this.sideA = sideA;
        this.sideB = sideB;
        this.sideC = sideC;
    }

    @Override
    public double getPerimeter() {
        return sideA + sideB + sideC;
    }

    @Override
    public double getArea() {
        // Using Heron's formula to calculate the area of a triangle
        double s = getPerimeter() / 2;  // semi-perimeter
        return Math.sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
    }
}

public class TriArea {
    public static void main(String[] args) {
        Triangle triangle = new Triangle(3, 4, 5);
        double area = triangle.getArea();
        System.out.println("Area: " + area);
    }
}

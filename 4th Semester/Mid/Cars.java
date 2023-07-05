package Mid;/* Consider a class Car having characteristics (states) like wheel, seats, color and behaviors like applying
brake and increasing speed. Now, prepare two objects namely ‘Sedan’ and ‘Coupe’ of the aforementioned
class possessing the following values shown in the chart. Also print the values. */

public class Cars {
    int wheel;
    int seats;
    String color;
    void applyBrake(String b){ //formal
        System.out.println(b);
    }
    void increaseSpeed(String s){
        System.out.println(s);
    }

    public static void main(String[] args) {
        Cars sedan = new Cars();
        Cars coupe = new Cars();

        sedan.wheel = 4;
        sedan.seats = 4;
        sedan.color = "Blue";
        System.out.println("Wheel: " + sedan.wheel);
        System.out.println("Seats: " + sedan.seats);
        System.out.println("Color: " + sedan.color);
        sedan.applyBrake("Break Applied"); //acctual

        coupe.wheel = 4;
        coupe.seats = 6;
        coupe.color = "Black";
        System.out.println("Wheel: " + coupe.wheel);
        System.out.println("Seats: " + coupe.seats);
        System.out.println("Color: " + coupe.color);
        coupe.increaseSpeed("Speed Increased");
    }
}

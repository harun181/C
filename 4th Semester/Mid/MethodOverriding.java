package Mid;//Java Program to illustrate the use of Java Method Overriding

class Vehicle{
    void run(){

        System.out.println("Mid.Vehicle is running");
    }
}

class Bike2 extends Vehicle{
    void run(){

        System.out.println("Bike is running safely");
    }

    public static void main(String args[]){
        Bike2 obj = new Bike2();
        obj.run();
    }
}

package Final;

class Bank{
    int getRateOfInterest(){return 0;}
}
class DBBL extends Bank{
    int getRateOfInterest(){return 8;}
}
class EBL extends Bank{
    int getRateOfInterest(){return 7;}
}
class NCC extends Bank{
    int getRateOfInterest(){return 9;}
}
class MethodOverriding{
    public static void main(String args[ ]){
        DBBL d=new DBBL();
        EBL e=new EBL();
        NCC n=new NCC();
        System.out.println("DBBL Rate of Interest: "+d.getRateOfInterest());
        System.out.println("EBL Rate of Interest: "+e.getRateOfInterest());
        System.out.println("NCC Rate of Interest: "+n.getRateOfInterest());
    }
}
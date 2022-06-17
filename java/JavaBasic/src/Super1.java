public class Super1 extends Super {
    Super1(){
        System.out.println("this is sub constructor");
    }
    Super1(int b){
        super(b);
        System.out.println("this is sub arg constrctor"+b);
    }

    int a;
    void display(){
        System.out.println("this is super1"+a);

       
    }
   
    void hello(){
        a=10;
      /*  super.a=20;
        super.display();*/
    }
}

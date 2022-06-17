public class Abclas2 extends Abclas{
    void Ontext(String text) {
        System.out.println(text);

    }
    Abclas2(){
        Abclas1 ts=new Abclas1(this);
        ts.scan();

    }

    public static void main(String[] args) {
        Abclas2 s=new Abclas2();
        
        
    }
    
}

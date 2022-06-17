public class Static {

    int a=10;
    public static void main(String[] args) {
        int a=20;
        Static s1=new Static();
        Static s2=new Static();
        s2.a=20;
        System.out.println(s1.a+" "+a+" " +s2.a);

        
    }
    
}

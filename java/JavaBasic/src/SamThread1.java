public class SamThread1 {

    public static void main(String[] args) {
        SamThread st=new SamThread();

        st.start();



        SamThread st1=new SamThread();
        st1.start();


        SamThread st2=new SamThread();

        st2.start();
    }
    
}

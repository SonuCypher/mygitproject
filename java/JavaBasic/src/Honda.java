

import java.util.Scanner;

public class Honda extends Bikes {


 public void run() {
        Scanner d=new Scanner(System.in);
        System.out.println("enter string");
        String a=d.nextLine();
        System.out.println(a);
        
    }
    

    public static void main(String[] args) {
        Honda h=new Honda();
        h.run();
    }
    
}

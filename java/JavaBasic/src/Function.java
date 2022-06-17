import java.util.Scanner;

public class Function {
    public static void main(String a[]) {
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("enter two numbers");
            
            int num1=s.nextInt();
            int num2=s.nextInt();

            int result=sum(num1,num2);

            System.out.println("result:"+result);
        }

        
    }

     static int sum(int num1, int num2) {
        int c=num1+num2;
        return c;
    } 
    
}

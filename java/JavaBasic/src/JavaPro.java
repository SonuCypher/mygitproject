import java.util.Scanner;

public class JavaPro {
    public static void main(String ar[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter the limit");
        int limit=s.nextInt();
        int[] num=new int[10];
        System.out.println("enter the numbers");
        for(int i=0;i<limit;i++)
        {
            num[i]=s.nextInt();
        }
        System.out.println("the numbers are");
        for(int i=0;i<limit;i++)
        {
            System.out.println(num[i]);
        }
        
    }
    
}

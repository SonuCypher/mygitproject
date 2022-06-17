import java.util.Scanner;

public class IfFor {
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        System.out.println("enter a number");
        int num=s.nextInt();
        int flag=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            System.out.println("the number "+num+" is a prime number");
        }
        else{
            System.out.println("the number "+num+" is not a prime number");
        }


    }
    
}

#include<stdio.h>

void main()
{
    int number,i,sum=0;
    printf("enter the number");
    scanf("%d",&number);
    for(int i=0; i<=number; i++)
    {
        if(i%2!=0)
        {
            sum=sum + i;
        }
    }
    printf("the sum is %d",sum);
}
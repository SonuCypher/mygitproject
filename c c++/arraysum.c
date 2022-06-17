#include<stdio.h>
int main(void)
{
    int i,total,numbers[100],sum=0;
    printf("enter the size");
    scanf("%d",&total);
    printf("enter the numbers");
    for(i=0;i<total;i++)
    {
        scanf("%d",&numbers[i]);
        sum=sum+numbers[i];
    }
    printf("sum is %d",sum);
    return 0;
}
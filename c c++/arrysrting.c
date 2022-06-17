#include<stdio.h>
int main(void)
{
int num[100],limit,i,j,temp=0;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the numbers");
for(i=0;i<limit;i++)
{
    scanf("%d",&num[i]);
}
for(i=0;i<limit-1;i++)
{
    for(j=i+1;j<limit;j++)
    {
        if(num[i]>num[j])
        {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
            
        }
    }
}
for(i=0;i<limit;i++)
           {
                printf("%d ",num[i]);
            }
return 0;
}
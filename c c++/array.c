#include<stdio.h>
int main(void)
{
    int numbers[100],limit,i;
    printf("enter limit");
    scanf("%d",&limit);
    printf("enter numbers");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("the numbers are ");
    for(i=0;i<limit;i++)
    {
        printf("%d ",numbers[i]);
    }
return 0;

}
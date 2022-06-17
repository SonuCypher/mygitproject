#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        if(i<50)
        {
        printf("you have failed %d is below 50\n",i);
        }
        else if(i==50)
        {
            printf("retry the exam %d is equal to 50\n",i);
        }
        else{
            printf("you have passed %d is above 50 congragulation\t",i);
        }

    }
return 0;
}